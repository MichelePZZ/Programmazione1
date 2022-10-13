# Ordinamento e ricerca

## 16.1 Ricerca in vettori: ricerca sequenziale e binaria
La ricerca di un elemento all'interno di un vettore può essere effettuata attraverso 2 tecniche: *sequenziale* o *binaria*.

### 16.1.1 Ricerca sequenziale
La ricerca sequenziale cerca un elemento utilizzando un valore chiave. Gli elementi di un vettore si atrtaversano in sequenza.  
L'algoritmo confronta ogni elemento dell'array con la chiave di ricerca.

    int ricercaLineare (int vettore[], int dim, int chiave){
        for(int i = 0; i < dim i++){
            if(vettore[i] == chiave) return i;
        }

        return -1;
    }

### 16.1.2 Ricerca binaria
La ricerca binaria può essere applicata solo quando l'array è ordinato.  

Si parte al centro del vettore. Se l'elemento centrale non contiene la chiave cercata, allora si esaminerà l'elemento centrale del semivettore destro o di quello sinistro. Il procedimento andrà avanti con semivettore sempre dimezzati fino a trovare l'elemento cercato.

    int RicercaBinaria (TipoDato v[], int basso, int alto, Tipodato chiave){

        int centrale;
        TipoDato valorecentrale;

        while (basso <= alto){
            centrale = (basso + alto) /  2;
            valoreCentrale = v[centrale];

            if(chiave == valoreCentrale)
                return centrale;
            else if (chiave < valoreCentrale)
                alto = centrale - 1;
            else
                basso = centrale + 1;
        }

        return -1;
    }

La **ricerca binaria** è molto più veloce rispetto alla **ricerca sequenziale**.

## 16.4 Ordinamento per scambio
L'ordinamento per scambio consiste nel confrontare il primo elemento del vettore con i successivi effettuando uno scambio di posizione. Alla fine del ciclo ne parte un altro che ripete la stessa operazione con il secondo elemento e così via.

    void Scambio (int &a, int &b){
        int aux = a;
        a = b;
        b = aux;
    }

    void OrdScambio (int a[], int n){
        for(int i=0; i < n-1; i=++){
            for(int j = i+1; j < n; j++){
                if(a[i] > a[j])
                    Scambio(a[i], a[j]);
            }
        }
    }

## 16.5 Ordinamento per selezione
    void Scambio (int &a, int &b){
        int aux = a;
        a = b;
        b = aux;
    }

    void OrdSelezione (int a[], int n){
        int indicemin;

        for(int j = i + 1; j < n; j++){
            if(a[j] < a[indicemin])
                indicemin = j;
            Scambio(a[indicemin], a[i]);
        }
    }

## 16.6 Ordinamento per inserimento
L'ordinamento per inserimento consiste nell'inserire un elemento alla volta nella posizione che gli spetta in un vettore già ordinato.

    void OrdInserimento (int a[], int n){
        int j, appoggio;

        for (int i = 1; i < n; i++){

            appoggio = a[i];
            j=i;

            while(j > 0 && appoggio < a[j-i]){
                a[j] = a[j-i];
                j--;
            }
            a[j] = appoggio;
        }
    }

## 16.7 Ordinamento a bolle (BubbleSort)
Nella tecnica del BubbleSort per ogni iterazione si confrontano elementi adiacenti e si scambiano i loro valori.

    void OrdBubbleSort(int a[], int n){
        bool continua = true;
        for (int i = 0; i < n-1 && continua; i++){
            continua = false;

            for (int j = 0; j < n-i-1; j++){
                if(a[j] > a[j+1]){
                    cintinua = true;
                    Scambio(a[j], a[j+1]);
                }
            }
        }
    }

## 16.8 Ordinamento Shell
Nello ShellSort si scambiano coppie di elementi che stanno a distanza. Si parte da una distanza di n/2, poi si passa a n/4 e così via fino alla dinstanza 1.

    void Scambio (int &a, int &b){
        int aux = a;
        a = b;
        b = aux;
    }
    
    void OrdShell (int a[], int n){
        int j, dist;

        for(dist = n/2; dist > 0; dist /=2){
            for(int i =dist; i < n; i++){
                j = i -dist

                while(j >= 0){
                    if(a[j] <= a[j+dist])
                        j = -1;
                    else{
                        Scambio(a[j], a[j+dist]);
                        j -= dist;
                    }
                }
            }
        }
    }

## Quicksort
