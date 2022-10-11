# Liste
## 17.1 Le liste
Una lista concatenata è una sequanza di elementi collegati l'uno all'altro da un puntatore. Ogni elemento contiene 2 parti: l'informazione e un puntatore all'elemento successivo.

Le liste si possono suddividere in 4 categorie:
    
    - liste semplici: ogni elemento contiene un unico puntatore che lo collega al nodo successivo;
        la lista è efficiente se percorsa in avanti.
    - liste doppiamente concatenate: ogni elemento contiene 2 puntatori, uno all'emento precedente e l'altro al
        successivo; la lista efficiente attraversata in entrambi i sensi;
    - liste circolari semplici: l'ultimo elemento si collega al primo in modo che la lista possa essere attraversata
        in modo circolare;
    - liste circolari doppiamente concatenate: l'ultimo elemento si collega al primo elemento e viceversa; questa
        lista si può attraversare in modo circolare in entrambi i sensi.

Il puntatore al primo elemento della lista è detto ***puntatore alla testa*** della lista.

    struct Nodo{
        int info;
        Nodo* suc;
    };

    Nodo n1, n2;

In C++ si può definire un elemento mediante i costrutti struct o con class.

## 17.2 Operazioni con le liste semplici
    - inserimento in testa:

        void inserisciInTesta(Nodo*& inizio, int elem){     //puntatore a primo elemento della lista, informazione del nodo
            Nodo* nuovo_nodo;
            
            nuovo_nodo->suc = inizio;
            nuovo_nodo->info = elem;

            inizio = nuovo_nodo;
        }

    - inserimento in coda:

        void inserisciInCoda(Nodo*& inizio, int elem){
            Nodo* p;
            Nodo* q = inizio;

            while(q != NULL){   // ciclo while che raggiunge la fine della lista
                p = q;
                q = q->suc;
            }

            q = new Nodo; // q viene utilizzato per puntare il nuovo nodo generato.
            q->info = elem;

            if(inizio == 0) 
                inizio->suc = q;
            else 
                p->suc = q;
        }