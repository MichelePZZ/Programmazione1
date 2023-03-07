// Esercizi_istruzioni_iterative/
//
// 4.cc  -->  Somma cifre di un numero
int somma_cifre(int N);

// 5.cc  -->  Frequenza di ogni cifra (tra 0 e 9) contenuta in un numero
int * frequenza_cifre(int N);

// 6.cc  -->  Scomposizione in fattori primi di un numero
void scomposizione(int N);

// 7.cc  -->  Dato in input un numero binario ritorna il complemento a 2
int complemento(int N_bin);



// Esercizi_sulla_ricorsione/
//
// 1.cc  -->  Triangolo di Pascal

// 3.cc  -->  Potenza
int rec_pow(int B, int e);

// 4.cc  -->  Somma cifre
int rec_somma_cifre(int N);

// 5.cc  -->  Inversione di un intero
int rec_reverse(int N, int tmp = 0);

// 6.cc  -->  Hailstone sequence
int hailstone(int N, int i = 0);



// Esercizi_su_array/
//
// 1.cc  -->  Ruota array di n posizioni
int * ruota(int arr[], int DIM, int n_pos);

// 2.cc  -->  Controlla se un array b è sottoarray di un array a
bool check_subarr(int a[], int DIMa, int b[], int DIMb);

// 3.cc  -->  Ricerca ricorsiva di un elemento e in un array
bool rec_search_elem_in_array(int arr[], int DIM, int e);

// 4.cc  -->  Quicksort array
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

// 5.cc  -->  Mergesort array
void merge(int a[], int left, int right, int center);
void mergeSort(int a[], int left, int right):

// 6.cc  -->  Randomsort array
bool check(int a[], int size);
void randomSort(int a[], int size);

// 7.cc  -->  Inversione array ricorsiva
void swap(int &a, int &b);
int * rec_reverse_arr(int arr[], int DIM);

// 8.cc  -->  Codifica di Cesare
char caesar_encode(char c, int n_pos = 3);

// 9.cc  -->  Trova il numero di elementi duplicati in un array
int n_of_duplicates(int arr[], int DIM);

// 10.cc  -->  Trova la frequenza con la quale un elemento e appare nell'array
int n_of_occurrencies(int arr[], int DIM, int e);

// 11.cc  -->  Sposta gli zeri in fondo all'array
void zeros_to_the_end(int arr[], int DIM);

// 12.cc  -->  Somma, Sottrazione e Prodotto fra matrici
void matrix_sum_sub(int a[10][10], int b[10][10], int result[10][10], bool sum);
void matrix_product(int a[10][10], int b[10][10], int result[10][10]);

// 13.cc  -->  Calcolo del determinante con il metodo di Laplace
void matrix_det_laplace;

// 16.cc  -->  Gioco del Tris
// 17.cc  -->  Gioco della Battaglia Navale



// Esercizi_liste_concatenate/
//
// .cc  -->  
void f;



int somma_cifre(int N) // unchecked
{
    int retval = 0;

    while (N > 0) {
        retval += n % 10;
        retval /= 10;
    }

    return retval;
}

int * frequenza_cifre(int N) // unchecked
{
    int f[10] = {};

    while (n > 0) {
        f[n % 10]++;
        n /= 10;
    }

    return f;
}

void scomposizione(int N) // output o array? // unchecked
{
    for (int i = 2; N != 1; i++){
        while (N % i == 0){
            cout << i << ", ";
            N /= i;
        }
    }

    cout << "\b\b"; //formattazione output
}

int complemento(int N_bin) // unchecked
{
    int retval;

    for(int i = 0; N_bin != 0; i++){
        retval += (!(N_bin % 2)) * pow(10, i);
        N_bin /= 10;
    }
    
    return retval;
}

int rec_pow(int B, int e) // unchecked
{
    if (e == 0)
        return 1;
    else
        return n * pow (B, e - 1);
}

int rec_somma_cifre(int N) // unchecked
{
    if (N / 10 == 0)
        return N % 10;
    else
        return (N % 10) + sum (N / 10);
}

int rec_reverse(int N, int tmp = 0) // unchecked
{
    if (N == 0)
        return tmp;
    

    tmp = (tmp * 10) + (N % 10);

    return reverse (N / 10, tmp);
}

int hailstone (int N, int i = 0) // unchecked
{
    i++;
    if(i % 10 == 0){
        cout << endl;
    }

    if (N == 1){
        return 1;
    }

    if ((N % 2) == 0){
        cout << i << " : " << N / 2 << "  /  ";
        return hailstone (N / 2, i);
    } else {
        cout << i << " : " << (3 * N) + 1 << "  /  ";
        return hailstone ((3 * N) + 1, i);
    }
}

int * ruota(int arr, int DIM, int n_pos) // unchecked
{
    int arr_r[DIM] = {}

    for (int i = 0; i < DIM; i++){
        arr_r[(i + n_pos) % 6] = arr[i]; 
    }

    return arr_r;
}

bool check_subarr(int a[], int DIMa, int b[], int DIMb) // unchecked
{
    for(int i = 0; i < DIMa; i++){
        if(b[0] == a[i]){
            
            for (int j = 1; j < DIMb; j++){
                if(b[j] != a[i + j])
                    return false;   
            }
        }
    }

    return true;
}

bool rec_search_elem_in_array(int arr[], int DIM, int e) // unchecked
{
    DIM--;

    if(DIM < 0)
        return false;
    
    if(arr[0] == e)
        return true;
    else {
        return search (arr[1], DIM, e);
    }
}

int partition(int arr[], int low, int high) // unchecked
{
    int pivot = arr[low];
    int count = 0;
    int pivotIndex;
    int i = low, j = high;

    for(size_t i = low + 1; i <= high; i++){
        if (arr[i] <= pivot)
            count++;
    }
    pivotIndex = low + count;

    swap(arr[pivotIndex], arr[low]);

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot)
            i++;
        while(arr[j] > pivot)
            j--;

        if(i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int low, int high) // unchecked
{
    if(low < high){
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

void merge(int a[], int left, int right, int center) // unchecked
{
    int i = left, j = center + 1, k = 0;
    int b[right - left + 1] = {0};

    while(i <= center && j <= right){
        if(a[i] <= a[j])
            b[k++] = a[i], ++i;
        else
            b[k++] = a[j], ++j;
    }

    while(i <= center)
        b[k++] = a[i++];

    while(j <= right)
        b[k++] = a[j++];

    for(int z = left; z <= right; ++z)
        a[z] = b[z-left];
}

void mergeSort(int a[], int left, int right) // unchecked
{
    if(left < right){
        int center = (left + right) / 2;
        mergeSort(a, left, center);
        mergeSort(a, center + 1, right);
        merge(a, left, right, center);
    }
}

bool check(int a[], int DIM) // unchecked
{
    for(int i = 0; i < DIM - 1; ++i){
        if(a[i] > a[i+1])
            return false;
    }

    return true;
}

void randomSort(int a[], int DIM) // unchecked
{
    int i, j;
    while(!check(a, DIM)){
        i = rand() % DIM;
        j = rand() % DIM;

        if (i > j)  // force i <= j
            swap (i, j);

        if (a[i] > a[j])
            swap(a[i], a[j]);
    }
}

void swap(int &a, int &b) 
{
   int t = a;
   a = b;
   b = t;
}

int * rec_reverse_arr(int arr[], int DIM, int i = 0) // unchecked
{
    if ((DIM / 2) == i)
        return;

    swap(a[i], a[DIM - i - 1]);

    rec_reverse_arr(arr, DIM, i++);
}

char caesar_encode(char c, int n_pos = 3) // unchecked
{
    if (c >= 'A' && c <= 'Z')
        c = (c - 'A' + n_pos) % ('Z' - 'A' + 1) + 'A';
    
    else if (c >= 'a' && c <= 'z')
        c = (c - 'a' + n_pos) % ('z' - 'a' + 1) + 'a';
    
    return c;
}

int n_of_duplicates(int arr[], int DIM) // elementi tripilcati? // unchecked
{
    int n = 0;

    for (int i = 0; i < DIM; i++){
        for (int j = i + 1; j < DIM; j++){
            
            if (a[i] == a[j])
                n++;
        }
    }
    
    return n;
}

int n_of_occurrencies(int arr[], int DIM, int e) // unchecked
{
    int retval = 0;

    for(int i = 0; i < DIM; i++){
        if(e == arr[i])
            retval++;
    }

    return retval;
}

void zeros_to_the_end(int arr[], int DIM) // unchecked
{
    int last = DIM - 1;

    for(int i = 0; i < last; i++){
        if(arr[i] == 0)
            swap(arr[i], arr[last--]);
    }
}

void matrix_sum_sub(int a[10][10], int b[10][10], int result[10][10], bool sum) // unchecked
{
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            if(sum)
                result[i][j] = a[i][j] + b[i][j];
            else
                result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void matrix_product(int a[10][10], int b[10][10], int result[10][10]) // unchecked
{
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            for(int z = 0; z < 10; ++z){
                result[i][j] += a[i][z] * b[z][j];
            }
        }
    }            
}

void matrix_det_laplace()
{
    ...
}

void f()
{
    ...
}