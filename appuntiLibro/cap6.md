# Vettori e strutture
## Strutture
Una struttura è una collezione di elementi (campi), ognino dei quali puè contenere un tipo diverso.

    es. struct <nome>{
        <tipo> <nomeCampo>;
        ...
    }

## 6.11 Funzioni membri di strutture
In C++ le strutture possono contenere anche funzioni.

## 6.12 Unioni
Simili alle strutture, le unioni allocano i campi nella stessa posizione di memoria.  
Essse si possono utilizzare quando il programma non ha bisogno di utilizzare i campi simultaneamente.

    es. union <nome>{
        <tipo> <nomeCampo>;
        ...
    }