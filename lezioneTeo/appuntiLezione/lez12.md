# Algoritmo di ordinamento
La complessità e l'efficienza di un algoritmo può essere misurata attraverso la complessità computazionale.

## Metodi di ordinamento

### Selection Sort

    1. Cerca l'elemento piu piccolo dell'array e lo scambia con
       l'elemento piu piccolo dell'array.
    2. Proseguo in questo modo fintanto che l'array non e ordinato.

    
    void selectionsort(int a[], int n){
        for(int = 0; i<n-1; i++){
            int min = i;
            for(int j=i+1; j<n; j++){
                if(a[j] < a[min]) min = j'
                swap(a[j], a[min]);
            }
        }
    }

Complessita computazionale: O(N^2);

### Inserction Sort

    1. considero un elemento alla volta e lo inserisco al proprio posto
       tra quello gia' considerati.

    void insertsort(int a[], int n){
        for(int i=n-1; i > 0; i--){
            if(a[i] < a[i-1]) swap(a[i], a[i-1]);
        }
        for(int i = 2; i <= n-1; i++){
            int j = i;
            int v = a[i];
            while(v < a[j-1]){
                a[j] = a[j-1];
                j--;
            }
            a[j] = v;
        }
    }

Complessita' computazionale: O(N^2);

### Bubble Sort

    1. si basa su scambi di elementi adiacenti se necessari, fino a
       quando non e' piu' richiesto alcuno scambio e l'array risulta
       ordinato.
    
    void bubblesort(int a[], int n){
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

Complessita' computazionale: O(N^2);

### Quick Sort

    - e' un algoritmo ***divide et impera***.
    - si basa su un processo id partizionamento dell'array in modo che
      le seguenti condizioni siano verificate:
          1. per qualche valore di i, l'elemento di a[i] si trova al
             posto giusto;
          2. tutti gli elemento a[0] ... a[i-1] sono minori o uguali ad
             a[i];
          3. tutti gli elementi a[i+1] ... a[n-1] sono maggiori o uguali
             ad a[i].
    -l'array e' ordinato partizionando ed applicando ricorsivamente il 
     metodo ai sotto array;
    
    1. scegliamo un pivot
    2. scandiamo l'array  dall'estremita' sinistra fino a quando non
       troviamo un elemento a[i] <= a[r].
    3. scandiamo l'array dall'estremita' destra dino a quando non
       troviamo un elemento a[i] >= a[r].
    4. scambiamo a[i] e a[j], e iteriamo.

Complessita' computazionale: O(n*log_2(n)) passi.

### Shell Sort

    1. l'idea di organizzare l'array in modo che esso soddisfi la
       proprieta'

## Merging

    void mergeArray(const double a[], in n1, const double b[], int n2, double c[]){
        for(int i=0, j=0, k=0; k<n1+n2; k++){
            // ...
        }
    }

# Array multidimensionali

    tipo id[dim1][dim2] = {lista_valori};

Le dimensioni devono essere valutabili durante la compilazione.

