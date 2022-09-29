# Flussi e file: libreria standard di I/O
## 10.3 La classe istream
La differenza tra get() e getline() è che quest'ultima immagazzina il carattere separatore o delimitatore nella stringa prima di aggiungere il carattere nullo. Questo è un problema che può essere risolto in 2 modi:

    - specificando un carattere di separazione differente nella funzione getline();
    - pulendo il buffer della tastiera appoggiando il carattere '\n' residuo su di una variabile ausiliaria:
        char Ausiliare[2];
        ...
        cin.getline(Ausiliare, 2);
        ...

## 10.4 La classe ostream
La funzione write() visualizza tanti caratteri quanti specificati nel secondo argomento.

## 10.5 Formattazione dell'output
La libreria ***iomanip*** contiene alcuni manipolatori:

    - hex: conversione esadecimale (es. cout << hex << Totale << endl;)
    - oct: conversione ottale
    - ws : estrae caratteri spazi in bianco
    - endl
    - ends: aggiunge il carattere nullo ('\0')
    - flush: svuota il buffer di output
    - setbase(n): stabilisce una base di conversione
    ...

## 10.6 Indicatori di formato
Ogni oggetto flusso contiene un insieme di flag. Questi flag possono essere settati e azzerati utilizzando ***setiosflags(long)*** e ***resetiosflags(long)***.

    - skipws: salta gli spazi in bianco
    - left: allinea l'output a sinistra
    - right: allinea l'output a destra
    - dec: attiva conversione decimale
    - oct: attiva conversione ottale
    - hex: attiva conversione esadecimale
    - showbase: visualizza l'indicatore di base numerica
    - showpoint: visualizza punto decimale in valori di virgola mobile
    - uppercase: visualizza valori esadecimali in maiuscolo
    ...

## 10.7 I/O da file
Per aprire un file in lettura bisogna dichiarare un oggetto flusso e associarlo a un file:
    
    ifstram fin ("demo");

Per aprire un file in scrittura bisogna specificare anche la modalità d'apertura:

    ofstream fout ("demo", ios::out);

In questo modo, se un file esiste esso viene totalmente riscritto. Se si vuole aggiungere invece che rimpiazzare i dati dentro un file esistente, lo si deve aprire in modalità ***append***. Le varie modalità sono:

    - ios::in -> input
    - ios::app -> append
    - ios::out -> output
    - ios::ate -> aprire e cercare la fine del file
    - ios::nocreate -> genera un errore se il file non esiste
    - ios::trunc -> tronca il file a 0 se il file esiste
    - ios::noreplace -> genera un errore se il file esiste
    - ios::binary -> il file si apre in modo binario

Una volta creato il flusso, si può utilizzare la funzione open() per associarlo a un file e aprirlo:

    void open(const char* nome, int modo, int accesso = filebuf::openprot);

Il metodo close chiude il file collegato all'oggetto flusso. La sua sintassi è:

    void close();

## 10.8 I/O binario
File che rappresentano immagini, suoni o filmati non sono file di testo, ovvero i byte non sono pensati per rappresentare testo.

    ifstream ent(argv[1], ios::in | ios::binary);

## 10.9 Accesso diretto
Nel sistema di I/O del C++ si può acccedere direttamente ai singoli byte dei flussi tramite le funzioni:

    - istraeam& seekg (streampos pos);
    - istraeam& seekg (streamoff spostamento, seekdir ind);
    - streampos tellg();