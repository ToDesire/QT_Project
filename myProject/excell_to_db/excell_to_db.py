import pandas as pd
import sqlite3 as st
import kivy
from kivy.app import App
from kivy.uix.widget import Widget
from kivy.lang  import Builder
from kivy.core.window import Window
from kivy.factory import Factory
import os

Window.size=(720,480)
Builder.load_file('style.kv')

class MyLayout(Widget):
    global extensions
    extensions = ['.xls','.csv','.xml','.json']

    def selected(self,filename):
        self.ids.path.text = f'{filename[0]}'

    def submited(self,filename):
        global excel_file
        match=False
        for ext in extensions:
            if ext in str(filename[0]):
                excel_file = str(filename[0])
                match=True
                break
        if not match:
            Factory.AlertPopup().open()
        
        else:
            
            # Connecting to db
            file_name = str(filename[0]).split('/')[-1].split('.')[0]
            con = st.connect(f'{file_name}.sqlite')
            
            # Reading files
            
            if '.csv' in excel_file:
                data = pd.read_csv(excel_file)
            elif '.json' in excel_file:
                data = pd.read_json(excel_file)
            elif '.xml' in excel_file:
                data = pd.read_xml(excel_file)
            elif '.xls' in excel_file:
                data = pd.read_excel(excel_file)
            
            # Converting
            
            data.to_sql(name="etudiantest",con=con,if_exists="replace",index=False)
            
            try:
                os.system(f"mv {file_name}.sqlite ../../Database/")
            except:
                print("Failed to copy :(")
            
            con.commit()
            con.close()
    
    def formatFile(self,filename):
        match=False
        for ext in extensions:
            if ext in str(filename[0]):
                excel_file = str(filename[0])
                match=True
                break
        if not match:
            Factory.AlertPopup().open()
        
        else:
        
            # Connecting to db
            file_name = str(filename[0]).split('/')[-1].split('.')[0]
            con = st.connect(f'projetest.sqlite')
            
            # Reading files
            
            if '.csv' in excel_file:
                data = pd.read_csv(excel_file)
            elif '.json' in excel_file:
                data = pd.read_json(excel_file)
            elif '.xml' in excel_file:
                data = pd.read_xml(excel_file)
            elif '.xls' in excel_file:
                data = pd.read_excel(excel_file)

            # Create a cursor for
            
            c = con.cursor()
            
            # Converting
            c.execute("""CREATE TABLE etudiantest (
    IdEtudiant          INTEGER PRIMARY KEY AUTOINCREMENT
                                NOT NULL
                                UNIQUE,
    identifiant         VARCHAR NOT NULL,
    nom                 VARCHAR,
    prenom              VARCHAR,
    [date de naissance]         NOT NULL,
    [numero CIN]        VARCHAR NOT NULL
                                DEFAULT (0),
    [type etudiant]     VARCHAR NOT NULL,
    niveau              VARCHAR,
    observation         VARCHAR NOT NULL,
    autorisation        BOOLEAN,
    [montant due]       INTEGER
);""")
            data.to_sql(name="etudiantest",con=con,if_exists="append",index=False)
            
            
            # Create additionnal tables
            
            c.execute("""CREATE TABLE if not exists receptionistes (
    IdReceptioniste        INTEGER PRIMARY KEY AUTOINCREMENT
                                   UNIQUE
                                   NOT NULL,
    [nom receptioniste]    VARCHAR,
    [prenom receptioniste] VARCHAR,
    [pseudo receptioniste] VARCHAR UNIQUE
                                   NOT NULL,
    mail                   VARCHAR NOT NULL
                                   UNIQUE,
    password               VARCHAR NOT NULL,
    active                 BOOLEAN NOT NULL,
    [niveau acces]         BOOLEAN NOT NULL
    );""")
            c.execute("""INSERT INTO receptionistes (
                               IdReceptioniste,
                               [nom receptioniste],
                               [prenom receptioniste],
                               [pseudo receptioniste],
                               mail,
                               password,
                               active,
                               [niveau acces]
                           )
                           VALUES (
                               1,
                               'root',
                               NULL,
                               'root',
                               'root@gmail.com',
                               'root',
                               1,
                               1
                           );""")
            c.execute("""CREATE TABLE versements (
    IdVersement         INTEGER PRIMARY KEY AUTOINCREMENT
                                UNIQUE
                                NOT NULL,
    montant             INTEGER DEFAULT (0),
    [numero borderau]   INTEGER UNIQUE
                                NOT NULL,
    [date de versement] DATE,
    [date de remise]    DATE,
    IdEtudiant          INTEGER CONSTRAINT FK_VERSEMENTS_ETUDIANTS REFERENCES etudiantest (IdEtudiant) ON DELETE CASCADE
                                                                                                       ON UPDATE CASCADE
                                NOT NULL,
    IdReceptioniste     INTEGER CONSTRAINT FK_VERSEMENTS_RECEPTIONISTES REFERENCES receptionistes (IdReceptioniste) ON DELETE CASCADE
                                                                                                                    ON UPDATE CASCADE
                                NOT NULL
    );""")
            c.execute("""CREATE TABLE historique (
    IdHistorique   INTEGER PRIMARY KEY AUTOINCREMENT,
    [date action]  DATE    NOT NULL,
    [heure action] TIME    NOT NULL,
    responsable    VARCHAR NOT NULL,
    [action]       VARCHAR NOT NULL
    );""")
            c.execute("""CREATE TABLE echellonements (
    IdEchellonement       INTEGER PRIMARY KEY AUTOINCREMENT
                                  UNIQUE
                                  NOT NULL,
    [date echellonement]  DATE    NOT NULL,
    [piece justificative] INTEGER UNIQUE,
    IdEtudiant            INTEGER CONSTRAINT FK_ETUDIANTS_ECHELLONEMENTS REFERENCES etudiantest (IdEtudiant) ON DELETE CASCADE
                                                                                                             ON UPDATE CASCADE
                                  UNIQUE
                                  NOT NULL
    );""")
            
        try:
            os.system(f"mv projetest.sqlite ../../Database/projetest.sqlite")
        except:
            print("Failed to copy :(")
                  
        con.commit()
        c.close()
   
class ExcellToDbApp(App):
    def build(self):
        return MyLayout()
    
if __name__ == '__main__':
    ExcellToDbApp().run()