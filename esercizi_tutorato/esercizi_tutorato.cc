// Eg. values
#define SIZE 4

// ./2020-10-03/es1.cc
// controllo pari tra due numeri
void pari_o_dispari_due_numeri(int, int);
// ./2020-10-03/es3.cc
void min_max_media();
// ./2020-10-03/es4.cc
// Battaglia navale (random)
void battaglia_navale();
// ./2020-10-03/es5.cc
int mcd(int, int);
int mcm(int, int);
int mcd_rec(int, int);
int mcm_rec(int, int);
// ./2020-10-03/es6.cc
void stampa_divisori(int);
// ./2020-10-10/es0.cc
// Stampa quadrato con 1 2 3 con regola paricolare
/*
2   3   3   3   2
1   2   3   2   3
1   1   2   3   3
1   2   1   2   3
2   1   1   1   2
*/
void stampa_quadrato(int n);
// ./2020-10-10/es1.cc
float calcolaScontoValore(float prezzo, int sconto);
void calcolaScontoRiferimento(float &prezzo, int sconto);
void calcolaScontoPuntatore(float *prezzo, int sconto);
// ./2020-10-10/es2.cc
float calcolaMediaValore(int voto, int crediti, float media, int creditiTot);
void calcolaMediaRiferimento(int voto, int crediti, float &media, int &creditiTot);
void calcolaMediaPuntatore(int voto, int crediti, float *media, int *creditiTot);
// ./2020-10-10/es3.cc
void swap(int &n1, int &n2);
void riordina(int &n1, int &n2, int &n3);
// ./2020-10-17/es2.cc
int fibonacci_rec(int n);
// ./2020-10-17/es3.cc
int somma_rec(int n1, int n2);
int prodotto_rec(int n1, int n2);
int potenza_rec(int n1, int n2);
// ./2020-10-17/es6.cc
// conta cifre uguali
int count_couple_rec(int n);
// ./2020-10-24/es0_1.cc
// inverse print  per array
void reverse_print_rec(int v[], int i);
// ./2020-10-24/es0_2.cc
// stampa gli indici massimi di un array
void print_max_indexes(int v[][SIZE], int dim1, int dim2);
// ./2020-10-24/es0_3.cc
// prodotto matriciale
void prod_matr(int m1[][SIZE], int m2[][SIZE], int res[][SIZE]);
// inizializzazione della matrice in modo randomico (ricordarsi di inizializzare nel main il seed (srand(...)))
void init(int matrix[][SIZE]);
void print_matrix(int matrix[][SIZE]);
// ./2020-10-24/es1.cc
// Scambia due righe in una matrice
void swap_rows(int matrix[][COL][2], int row1, int row2);
void swap(int *f1, int *f2);
// Moltiplicare una riga per un valore intero lambda (#include <algorithm> // for C++14 o #include <numeric> // for C++17)
void mul_row(int matrix[][COL][2], int row, int lambda);
void reduce_fraction(int *v);
// Sottrarre due righe tra di loro, salvando il risultato nella prima riga passata input
void dif_rows(int matrix[][COL][2], int row1, int row2);
void dif_fraction(int *f1, int *f2);
// ./2020-10-24/es2.cc
// Bubble sort su matrice per righe e ordimanento righe per media
void bubbleSort(int arr[], int n);
float calcolaMedia(int arr[], int n);
void bubbleSortByAvg(int arr[][M], int n, int m);
// ./2020-10-24/es3.cc
// Merge sort
void merge(int vec[], int l, int m, int r);
void merge_sort_rec(int arr[], int l, int r);
void merge_sort(int vec[], int length);
// ./2020-11-07/es1.cc
void stampa_occorrenze_in_input();
// ./2020-11-07/es2.cc
// Controllo se una stringa è palindroma
bool is_palindroma(char str[]);
bool is_palindroma_rec(char str[], int i, int j);
bool is_palindroma2(char str[]);
// ./2020-11-07/es3.cc
// Censura caratteri maiuscoli
void codifica_rec(char s[], int i, const int len);
void codifica(char s[]);
// ./2020-11-07/es4.cc
// Selezione elementi (pari) recursivo
int *filter(int *v, int v_len, int &res_len);
int *filter_rec(int *v, int i, int count, int &res_len);
// ./2020-11-07/es5.cc
// Calcolo matrice trasposta
int **transpose(int **m, const int row, const int col);
// ./2020-11-14/es0.cc
// Creazione punto e relative funzioni
struct point;
point init_point(float x, float y);
void compute_line(point p1, point p2);
bool equals(point p1, point p2);
void print_point(point p);
// ./2020-11-14/es1.cc
// Array dinamico e relative funzioni
struct arraylist;
arraylist *init(const int length);
void expand(arraylist &l);
void reduce(arraylist &l);
void add(arraylist &l, const int value);
void remove_last(arraylist &l);
void print(arraylist &l);
// ./2020-11-14/es2.cc
// Lista concatenata di struct
struct person;
struct node;
person init_person(char name[35], int age);
void print_person(person p);
node *init_node(person p, node *next);
void insert_ordered(node *&l, person p);
void print_list(node *l);
void delete_list(node *&l);
// ./2020-11-14/es3.cc
struct node2;
void inserisci_in_testa(node2 *&lista, int val);
void init_lista(node2 *&lista, int val);
void inserisci_ordinato(node2 *&lista, int val);
void rimuovi_nodo(node2 *&lista, int val);
void stampa(node2 *lista);
void dealloca_lista(node2 *&lista);
// ./2020-11-28/es1.cc e ./2020-11-28/es1try.cc
// Converti da base 17
int converti(char *numero);
int converti_rec(char *numero);
// ./2020-11-28/es2/*
struct node3;
struct priorityQueue;
struct fake_pair;
priorityQueue *init(int dim);
void enqueue(priorityQueue &pq, int value, int priority);
int dequeue(priorityQueue &pq);
void print(priorityQueue &pq);
void dealloc(priorityQueue &pq);
// ./2020-12-05/es0.cc
struct stack;
void init(stack &s, int dim);
bool push(stack &s, int val);
bool first(stack &s, int &ret);
bool last(stack &s, int &ret);
bool pop(stack &s);
bool pop_last(stack &s);
void dealloc(stack &s);
// ./2020-12-05/Graph.*
// Set
struct set;
void init(set &s);
void insert(set &s, int value);
void remove_element(set &s, int value);
bool contains(set &s, int value);
void expand(set &s);
void shrink(set &s);
bool empty(set &s);
bool full(set &s);
void print_set(set &s);
void dealloc(set &s);
// Graph
struct graph;
void init(graph &g, int number_of_nodes);
void fill_graph(graph &g, const char *file_path);
void print_graph(graph &g);
void dependences(graph &g, int node);
void dealloc(graph &g);

void pari_o_dispari_due_numeri(int n1, int n2)
{
    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
        cout << "Entrambi sono pari" << endl;
    }
    else if ((n1 % 2 == 0 && n2 % 2 != 0) || (n1 % 2 != 0 && n2 % 2 == 0))
    {
        cout << "Uno è pari l'altro è dispari" << endl;
    }
    else
    {
        cout << "Entrambi sono dispari" << endl;
    }
}

void min_max_media()
{
    int n;
    int somma = 0, max, min;

    do
    {
        cout << "Quanti valori vuoi inserire?\n";
        cin >> n;
    } while (n <= 0);

    int val;

    for (int i = 0; i < n; i++)
    {
        cout << "Valore numero " << i + 1 << " = ";
        cin >> val;
        if (i == 0)
        {
            min = val;
            max = val;
        }
        else if (val > max)
        {
            max = val;
        }
        else if (val < min)
        {
            min = val;
        }
        somma += val;
    }

    cout << "MAX= " << max << endl;
    cout << "MIN= " << min << endl;
    cout << "MEDIA= " << (float)somma / n << endl;
}

void battaglia_navale()
{
    // srand(time(NULL));
    int g1_tiro1, g1_tiro2;
    int g2_tiro1, g2_tiro2;

    g1_tiro1 = rand() % 6 + 1;
    g1_tiro2 = rand() % 6 + 1;
    g2_tiro1 = rand() % 6 + 1;
    g2_tiro2 = rand() % 6 + 1;

    int max_g1, min_g1;
    int max_g2, min_g2;

    // Ordiniamo i lanci del primo giocatore
    max_g1 = g1_tiro1;
    if (max_g1 < g1_tiro2)
    {
        max_g1 = g1_tiro2;
    }

    min_g1 = g1_tiro1;
    if (min_g1 > g1_tiro2)
    {
        min_g1 = g1_tiro2;
    }

    // Ordiniamo i lanci del secondo giocatore
    max_g2 = g2_tiro1;
    if (max_g2 < g2_tiro2)
    {
        max_g2 = g2_tiro2;
    }

    min_g2 = g2_tiro1;
    if (min_g2 > g2_tiro2)
    {
        min_g2 = g2_tiro2;
    }

    cout << "Lanci giocatore 1 (attaccante): " << g1_tiro1 << " " << g1_tiro2 << endl;
    cout << "Lanci giocatore 2 (difensore): " << g2_tiro1 << " " << g2_tiro2 << endl;

    cout << "Lanci ordinati giocatore 1 (attaccante): " << min_g1 << " " << max_g1 << endl;
    cout << "Lanci ordinati giocatore 2 (difensore): " << min_g2 << " " << max_g2 << endl;

    int vittorie_g1 = 0, vittorie_g2 = 0;

    if (min_g2 >= min_g1)
    {
        vittorie_g2++;
    }
    else
    {
        vittorie_g1++;
    }

    if (max_g2 >= max_g1)
    {
        vittorie_g2++;
    }
    else
    {
        vittorie_g1++;
    }

    if (vittorie_g1 > vittorie_g2)
    {
        cout << "Vince il giocatore 1 con " << vittorie_g1 << " vittorie" << endl;
    }
    else
    {
        if (vittorie_g1 == vittorie_g2)
        {
            cout << "La partita si è conclusa con un pareggio!" << endl;
        }
        else
        {
            cout << "Vince il giocatore 2 con " << vittorie_g2 << " vittorie" << endl;
        }
    }
}

int mcd(int a, int b)
{
    int mcd;
    int test_mcd, min;

    if (a < b)
        min = a;
    else
        min = b;

    test_mcd = 1;

    while (test_mcd <= min)
    {
        if (a % test_mcd == 0 && b % test_mcd == 0)
            mcd = test_mcd;
        test_mcd++;
    }

    return mcd;
}

int mcm(int a, int b)
{
    return (a * b) / mcd(a, b);
}

int mcd_rec(int n1, int n2)
{
    int retval;
    if (n2 == 0)
    {
        retval = n1;
    }
    else
    {
        retval = mcd_rec(n2, n1 % n2);
    }
    return retval;
}

int mcm_rec(int a, int b)
{
    return (a * b) / mcd_rec(a, b);
}

void stampa_divisori(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << endl;
}

void stampa_quadrato(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - 1 - j)
                cout << "2\t";
            else if (i > j)
                cout << "1\t";
            else
                cout << "3\t";
        }
        cout << endl;
    }
}

float calcolaScontoValore(float prezzo, int sconto)
{
    return prezzo - (prezzo * sconto) / 100;
}

void calcolaScontoRiferimento(float &prezzo, int sconto)
{
    prezzo -= (prezzo * sconto) / 100;
}

void calcolaScontoPuntatore(float *prezzo, int sconto)
{
    *prezzo -= ((*prezzo) * sconto) / 100;
}

float calcolaMediaValore(int voto, int crediti, float media, int creditiTot)
{
    return ((media * creditiTot) + (voto * crediti)) / (creditiTot + crediti);
}

void calcolaMediaRiferimento(int voto, int crediti, float &media, int &creditiTot)
{
    media = ((media * creditiTot) + (voto * crediti)) / (creditiTot + crediti);
    creditiTot += crediti;
}

void calcolaMediaPuntatore(int voto, int crediti, float *media, int *creditiTot)
{
    *media = (((*media) * (*creditiTot)) + (voto * crediti)) / ((*creditiTot) + crediti);
    *creditiTot += crediti;
}

void swap(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void riordina(int &n1, int &n2, int &n3)
{
    if (n3 <= n2)
        swap(n2, n3);
    if (n3 <= n1)
        swap(n1, n3);
    if (n2 <= n1)
        swap(n1, n2);
}

int fibonacci_rec(int n)
{
    int val;
    if (n == 0)
    {
        val = 0;
    }
    else if (n == 1)
    {
        val = 1;
    }
    else
    {
        val = fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
    }
    return val;
}

int somma_rec(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    else
    {
        return 1 + somma(n1, n2 - 1);
    }
}

int prodotto_rec(int n1, int n2)
{
    if (n2 == 1)
    {
        return n1;
    }
    else
    {
        return somma_rec(n1, prodotto_rec(n1, n2 - 1));
    }
}

int potenza_rec(int n1, int n2)
{
    if (n2 == 1)
    {
        return n1;
    }
    else
    {
        return prodotto_rec(n1, potenza_rec(n1, n2 - 1));
    }
}

int count_couple_rec(int n)
{
    if (n < 10)
    {
        return 0;
    }
    else
    {
        int c1 = n % 10;
        int n1 = n / 10;
        int c2 = n1 % 10;
        if (c1 == c2)
        {
            return 1 + count_couple_rec(n1);
        }
        else
        {
            return count_couple_rec(n1);
        }
    }
}

void reverse_print_rec(int v[], int i)
{
    if (i > 0)
    {
        cout << v[i - 1] << " ";
        reverse_print_rec(v, i - 1);
    }
}

void print_max_indexes(int v[][SIZE], int dim1, int dim2)
{
    int max_i = 0, max_j = 0, max = v[0][0];
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2; j++)
        {
            if (v[i][j] > max)
            {
                max_i = i;
                max_j = j;
                max = v[i][j];
            }
        }
    }

    cout << "[" << max_i << "," << max_j << "]" << endl;
}

void prod_matr(int m1[][SIZE], int m2[][SIZE], int res[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void init(int matrix[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
}

void print_matrix(int matrix[][SIZE])
{
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void swap_rows(int matrix[][COL][2], int row1, int row2)
{
    for (int j = 0; j < COL; j++)
        swap(matrix[row1][j], matrix[row2][j]);
}

void swap(int *f1, int *f2)
{
    int *t = f2;
    f2 = f1;
    f1 = t;
}

void mul_row(int matrix[][COL][2], int row, int lambda)
{
    for (int i = 0; i < COL; i++)
    {
        matrix[row][i][0] *= lambda;
        reduce_fraction(matrix[row][i]);
    }
}

void reduce_fraction(int *v)
{
    int gcd;
    do
    {
        gcd = __gcd(v[0], v[1]);
        v[0] /= gcd;
        v[1] /= gcd;
    } while (gcd != 1);
}

void dif_rows(int matrix[][COL][2], int row1, int row2)
{
    for (int i = 0; i < COL; i++)
    {
        dif_fraction(matrix[row1][i], matrix[row2][i]);
    }
}

void dif_fraction(int *f1, int *f2)
{
    int mcm = (f1[1] * f2[1]) / __gcd(f1[1], f2[1]);
    f1[0] = (f1[0] * (mcm / f1[1])) - (f2[0] * (mcm / f2[1]));
    f1[1] = mcm;
    reduce_fraction(f1);
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

float calcolaMedia(int arr[], int n)
{
    int somma = 0;
    for (int i = 0; i < n; i++)
    {
        somma += arr[i];
    }
    return (float)somma / n;
}

void bubbleSortByAvg(int arr[][M], int n, int m)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (calcolaMedia(arr[j], m) > calcolaMedia(arr[j + 1], m))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void merge(int vec[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int left[n1], right[n2];

    for (int it = 0; it < n1; it++)
    {
        left[it] = vec[l + it];
    }
    for (int it = 0; it < n2; it++)
    {
        right[it] = vec[m + 1 + it];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            vec[k] = left[i];
            i++;
        }
        else
        {
            vec[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        vec[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        vec[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort_rec(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2; // equal to (r + l) / 2

        merge_sort_rec(arr, l, mid);
        merge_sort_rec(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

void merge_sort(int vec[], int length)
{
    merge_sort_rec(vec, 0, length - 1);
}

void stampa_occorrenze_in_input()
{
    ifstream in("input.txt");

    int count[256] = {}; // init to zero
    char c;

    if (in.fail())
    {
        cerr << "Errore nell'apertura del file" << endl;
        exit(-1);
    }

    while (in >> c)
    {
        count[c] += 1;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            cout << "[" << (char)i << "] -> " << count[i] << endl;
        }
    }

    in.close();
}

bool is_palindroma_rec(char str[], int i, int j)
{
    if (i < j)
    {
        return str[i] == str[j] && is_palindroma_rec(str, i + 1, j - 1);
    }
    else
    {
        return true;
    }
}

bool is_palindroma(char str[])
{
    return is_palindroma_rec(str, 0, strlen(str) - 1);
}

void codifica_rec(char s[], int i, const int len)
{
    if (i < len)
    {
        if (isupper(s[i]))
        {
            s[i] = '*';
        }
        codifica_rec(s, i + 1, len);
    }
}

void codifica(char s[])
{
    codifica_rec(s, 0, strlen(s));
}

int *filter_rec(int *v, int i, int count, int &res_len)
{
    int *res = nullptr;
    if (i <= 0)
    {
        res = new int[count];
    }
    else
    {
        if (v[i - 1] % 2 == 0)
        {
            res = filter_rec(v, i - 1, count + 1, res_len);

            res_len++;
            res[res_len - 1] = v[i - 1];
        }
        else
        {
            res = filter_rec(v, i - 1, count, res_len);
        }
    }
    return res;
}

int *filter(int *v, int v_len, int &res_len)
{
    res_len = 0;
    int *res;
    res = filter_rec(v, v_len, 0, res_len);
    return res;
}

int **transpose(int **m, const int row, const int col)
{
    int **res = alloc(col, row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            res[j][i] = m[i][j];
        }
    }
    return res;
}

struct point
{
    float x;
    float y;
};

point init_point(float x, float y)
{
    point p;
    p.x = x;
    p.y = y;

    return p;
}

void compute_line(point p1, point p2)
{
    float w, b;

    if (equals(p1, p2))
    {
        cout << "The two points must be different to each other:" << endl;
        print_point(p1);
        print_point(p2);
    }
    else if (p1.x == p2.x)
    {
        cout << "x = " << p1.x << endl;
    }
    else if (p1.y == p2.y)
    {
        cout << "y = " << p1.y << endl;
    }
    else
    {
        w = (p1.y - p2.y) / (p1.x - p2.x);
        b = p1.y - w * p1.x;
        cout << "y = " << w << "x ";
        if (b >= 0)
            cout << "+ ";
        cout << b << endl;
    }
}

bool equals(point p1, point p2)
{
    bool eq = false;
    if (p1.x == p2.x && p1.y == p2.y)
        eq = true;

    return eq;
}

void print_point(point p)
{
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

struct arraylist
{
    const float EXPANSION_SHRINK_FACTOR = 2;
    const float reduce_factor = 0.25;
    int current_length = 0;
    int current_max_length = 0;
    int *list = nullptr;
};

arraylist *init(const int length)
{
    arraylist *res = new arraylist;
    res->current_max_length = length;
    res->list = new int[length];
    return res;
}

void expand(arraylist &l)
{
    int *new_list = new int[(int)((l.current_max_length == 0 ? 1 : l.current_max_length) * l.EXPANSION_SHRINK_FACTOR)];
    for (int i = 0; i < l.current_max_length; i++)
    {
        new_list[i] = l.list[i];
    }
    delete[] l.list;
    l.list = new_list;
    l.current_max_length = ((int)((l.current_max_length == 0 ? 1 : l.current_max_length) * l.EXPANSION_SHRINK_FACTOR));
    cout << "List expanded!\n";
}

void reduce(arraylist &l)
{
    int *new_list = new int[(int)(l.current_max_length * l.reduce_factor)];
    for (int i = 0; i < l.current_length; i++)
    {
        new_list[i] = l.list[i];
    }
    delete[] l.list;
    l.list = new_list;
    l.current_max_length = ceil(l.current_max_length / 4);
    cout << "List reduced!\n";
}

void add(arraylist &l, const int value)
{
    if (l.current_length == l.current_max_length)
    {
        expand(l);
    }
    l.list[l.current_length++] = value;
}

void remove_last(arraylist &l)
{
    if (l.current_length > 0)
    {
        l.current_length--;
        if (l.current_length <= l.current_max_length / 4)
        {
            reduce(l);
        }
    }
    else
    {
        cout << "Empty!\n";
    }
}

void print(arraylist &l)
{
    for (int i = 0; i < l.current_length; i++)
    {
        cout << l.list[i] << " ";
    }
    cout << endl;
    cout << "current_len " << l.current_length << endl;
    cout << "current_max_len " << l.current_max_length << endl;
}

struct person
{
    char name[35];
    int age;
};

struct node
{
    person p;
    node *next;
};

person init_person(char name[35], int age)
{
    person p;
    strcpy(p.name, name);
    p.age = age;

    return p;
}

void print_person(person p)
{
    cout << p.name << " " << p.age << "y.o.";
}

node *init_node(person p, node *next)
{
    node *n = new node;
    n->p = p;
    n->next = next;
    return n;
}

void insert_ordered(node *&l, person p)
{
    node *s;
    node *tmp;
    if (l == NULL || p.age < l->p.age)
    {
        tmp = new node;
        tmp->p = p;
        tmp->next = l;
        l = tmp;
    }
    else
    {
        tmp = l;
        while (tmp->next != NULL && p.age > tmp->next->p.age)
        {
            tmp = tmp->next;
        }
        s = new node;
        s->p = p;
        s->next = tmp->next;
        tmp->next = s;
    }
}

void print_list(node *l)
{
    if (l != NULL)
    {
        cout << "[";
        for (l; l != NULL; l = l->next)
        {
            print_person(l->p);
            if (l->next != NULL)
                cout << ", ";
        }
        cout << "]" << endl;
    }
}

void delete_list(node *&l)
{
    node *tmp = l;
    while (l != NULL)
    {
        cout << tmp->p.age << endl;
        tmp = l->next;
        delete l;
        l = tmp;
    }
    l = NULL;
}

struct node2
{
    int val;
    node2 *next;
    node2 *prev;
};

void inserisci_in_testa(node2 *&lista, int val)
{
    node2 *n = new node2;
    n->val = val;
    n->next = lista;
    n->prev = lista->prev;
    lista->prev = n;
    lista = n;
}

void init_lista(node2 *&lista, int val)
{
    lista = new node2;
    lista->next = NULL;
    lista->prev = NULL;
    lista->val = val;
}

void inserisci_ordinato(node2 *&lista, int val)
{
    if (lista == NULL)
    {
        init_lista(lista, val);
    }
    else if (lista->val >= val)
    {
        inserisci_in_testa(lista, val);
    }
    else
    {
        node2 *q = lista;
        while ((q->next != NULL) && (q->next->val <= val))
        {
            q = q->next;
        }
        node2 *r = new node2;
        r->val = val;
        r->next = q->next;
        if (q->next != NULL)
        {
            q->next->prev = r;
        }
        r->prev = q;
        q->next = r;
    }
}

void rimuovi_nodo(node2 *&lista, int val)
{
    if (lista != NULL)
    {
        node2 *temp = lista;
        if (lista->val == val)
        {
            if (lista->next != NULL)
            {
                lista->next->prev = NULL;
            }
            lista = lista->next;
            delete temp;
        }
        while (temp->next != NULL)
        {
            if (temp->next->val == val)
            {
                node2 *r = temp->next;
                temp->next = temp->next->next;
                if (temp->next != NULL)
                {
                    temp->next->prev = temp;
                }
                delete r;
                return;
            }
            temp = temp->next;
        }
        cout << "Elemento non trovato" << endl;
    }
    else
    {
        cout << "La lista è vuota" << endl;
    }
}

void stampa(node2 *lista)
{
    if (lista == NULL)
    {
        cout << "Lista vuota" << endl;
        return;
    }
    while (lista != NULL)
    {
        cout << "Valore: " << lista->val << "\t";
        cout << "Valore prossimo: ";
        if (lista->next != NULL)
        {
            cout << lista->next->val;
        }
        else
        {
            cout << "NULL";
        }
        cout << "\tValore precedente: ";
        if (lista->prev != NULL)
        {
            cout << lista->prev->val;
        }
        else
        {
            cout << "NULL";
        }
        cout << "\t" << endl;

        lista = lista->next;
    }
}

void dealloca_lista(node2 *&lista)
{
    while (lista != NULL)
    {
        node2 *temp = lista;
        lista = lista->next;
        delete temp;
    }
    cout << "Lista deallocata" << endl;
}

int converti(char *numero)
{
    int len = strlen(numero);
    int risultato = 0;

    for (int i = 0; i < lenATmp; ++i)
    {
        risultato = (risultato * 17);
        if ('0' <= numero[i] && '9' >= numero[i])
        {
            risultato += numero[i] - '0';
        }
        else
        {
            risultato += numero[i] - 'A' + 10;
        }
    }

    return risultato;
}

int converti_rec(char *numero)
{
    int risultato = -1;
    if (numero[0] != '\0')
    {
        risultato = 0;
        int next = converti_rec(numero + 1);

        if ('0' <= numero[0] && '9' >= numero[0])
        {
            risultato += numero[0] - '0';
        }
        else
        {
            risultato += numero[0] - 'A' + 10;
        }

        if (next != -1)
        {
            risultato *= 17;
            risultato += next;
        }
    }

    return risultato;
}

struct node3
{
    int value;
    node3 *left = nullptr;
    node3 *right = nullptr;
};

struct priorityQueue
{
    node3 **queue;
    int dim;
};

struct fake_pair
{
    node3 *first;
    int second;
};

priorityQueue *init(int dim)
{
    priorityQueue *pq = new priorityQueue{new node3 *[dim], dim};
    for (int i = 0; i < dim; i++)
    {
        pq->queue[i] = nullptr;
    }
    return pq;
}

void enqueue(priorityQueue &pq, int value, int priority)
{
    if (priority >= pq.dim && priority < 0)
    {
        cout << "No priority " << priority << " exists" << endl;
    }
    else
    {
        if (pq.queue[priority] == nullptr)
        {
            pq.queue[priority] = new node3{value};
        }
        else
        {
            node3 *curr_node3 = pq.queue[priority];
            while (curr_node3->right != nullptr)
            {
                curr_node3 = curr_node3->right;
            }
            node3 *new_node3 = new node3{value, curr_node3, new_node3}; // value, left, right
        }
    }
}

int dequeue(priorityQueue &pq)
{
    int retval = -1;
    int index = 0;
    node3 *vis_node3 = pq.queue[index];
    bool extracted = false;
    while (!extracted && index < pq.dim)
    {
        if (vis_node3 != nullptr)
        {
            node3 *temp = vis_node3;
            retval = pq.queue[index]->value;
            pq.queue[index] = vis_node3->right;
            delete temp;
            extracted = true;
        }
        vis_node3 = pq.queue[++index];
    }
    return retval;
}

void dealloc(priorityQueue &pq)
{
    node3 *curr_node3;
    for (int i = 0; i < pq.dim; i++)
    {
        curr_node3 = pq.queue[i];
        while (curr_node3 != nullptr)
        {
            node3 *temp = curr_node3;
            curr_node3 = curr_node3->right;
            delete temp;
        }
    }
    delete[] pq.queue;
}

void print(priorityQueue &pq)
{
    node3 *visiting_node3;
    for (int i = 0; i < pq.dim; i++)
    {
        cout << "Priority " << i << " -> [";
        visiting_node3 = pq.queue[i];
        if (visiting_node3 == nullptr)
        {
            cout << "]" << endl;
        }
        else
        {
            while (visiting_node3 != nullptr)
            {
                cout << visiting_node3->value << ", ";
                visiting_node3 = visiting_node3->right;
            }
            cout << "]" << endl;
        }
    }
    cout << endl;
}

struct stack
{
    int *buffer;
    int head;
    int curr_size;
    int max_size;
};

void init(stack &s, int dim)
{
    s.buffer = new int[dim];
    s.head = 0;
    s.curr_size = 0;
    s.max_size = dim;
}

bool push(stack &s, int val)
{
    bool result = true;
    if (s.curr_size < s.max_size)
    {
        s.buffer[s.head] = val;
        s.head = (s.head + 1) % s.max_size;
        s.curr_size++;
    }
    else
    {
        result = false;
    }
    return result;
}

bool first(stack &s, int &ret)
{
    bool result = true;
    if (s.curr_size > 0)
    {
        ret = s.buffer[(s.head - 1 + s.max_size) % s.max_size];
    }
    else
    {
        result = false;
    }
    return result;
}

bool last(stack &s, int &ret)
{
    bool result = true;
    if (s.curr_size > 0)
    {
        ret = s.buffer[(s.head - s.curr_size + s.max_size) % s.max_size];
    }
    else
    {
        result = false;
    }
    return result;
}

bool pop(stack &s)
{
    bool result = true;
    if (s.curr_size > 0)
    {
        s.head = (s.head - 1 + s.max_size) % s.max_size;
        s.curr_size--;
    }
    else
    {
        result = false;
    }
    return result;
}

bool pop_last(stack &s)
{
    bool result = true;
    if (s.curr_size > 0)
    {
        s.curr_size--;
    }
    else
    {
        result = false;
    }
    return result;
}

void dealloc(stack &s)
{
    delete s.buffer;
}

struct set
{
    int *arrayList = nullptr;
    int current_size = 0;
    int buffer_length = 5;
    const float EXPANSION_SHRINK_FACTOR = 2.0; // Indice di cambiamento di dimensione
    const float LOAD = 0.25;                   // Se l'array è pieno meno del 25% l'array viene ridotto
};

void init(set &s)
{
    s.arrayList = new int[s.buffer_length];
}

void dealloc(set &s)
{
    delete[] s.arrayList;
}

bool empty(set &s)
{
    return s.current_size == 0;
}

bool full(set &s)
{
    return s.current_size == s.buffer_length;
}

int find_index(set &s, const int value)
{
    int index = 0;
    while (s.arrayList[index] < value && index < s.current_size)
    {
        index++;
    }
    return index;
}

void expand(set &s)
{
    cout << "\nExpanding set" << endl;
    // Alloco un nuovo array dell'attuale dimesione del set * il fattore di espansione
    int *new_array_list = new int[(int)(s.buffer_length * s.EXPANSION_SHRINK_FACTOR)];
    // Copio il vecchio array in quello nuovo
    for (int i = 0; i < s.current_size; i++)
    {
        new_array_list[i] = s.arrayList[i];
    }
    delete[] s.arrayList;
    s.arrayList = new_array_list;
    // Aggiorno la dimensione massima del set
    s.buffer_length = (int)(s.buffer_length * s.EXPANSION_SHRINK_FACTOR);
};

void shrink(set &s)
{
    // Analogo all'expansion ma dividendo la lunghezza massima
    cout << "\nShrinking set" << endl;
    int *new_array_list = new int[(int)(s.buffer_length / s.EXPANSION_SHRINK_FACTOR)];
    for (int i = 0; i < s.current_size; i++)
    {
        new_array_list[i] = s.arrayList[i];
    }
    delete[] s.arrayList;
    s.arrayList = new_array_list;
    s.buffer_length = (int)(s.buffer_length / 2);
}

void insert(set &s, int value)
{
    if (empty(s))
    {
        // Se vuoto inserisco l'elemento e
        // incremento il numero di elementi al suo interno
        s.arrayList[0] = value;
        s.current_size++;
    }
    else if (!contains(s, value))
    {
        // Per definizione, se un elemento è già presente nel set
        // questo non viene reinserito

        // Se il set è pieno lo espando
        if (full(s))
        {
            expand(s);
        }
        // Trovo l'indice in cui inserire l'elemento
        int index = find_index(s, value);
        s.current_size++;
        // Faccio scorrere tutti gli elementi dopo l'indice trovato
        // a destra
        for (int i = s.current_size; i > index; i--)
        {
            s.arrayList[i] = s.arrayList[i - 1];
        }
        // Inserirsco l'elemento
        s.arrayList[index] = value;
    }
}

void remove_element(set &s, int value)
{
    // Se l'elemento è presente
    if (contains(s, value))
    {
        // Trovo la sua posizione
        int index = find_index(s, value);
        s.current_size--;
        // Faccio scorrere, gli elementi dall'indice trovato in poi, a sinistra
        for (int i = index; i < s.current_size; i++)
        {
            s.arrayList[i] = s.arrayList[i + 1];
        }
        // Se la dimensione è sotto la soglia di LOAD, riduco la dimensione
        if ((float)s.current_size / s.buffer_length < s.LOAD)
        {
            shrink(s);
        }
    }
}

bool binary_search_rec(set &s, const int value, int sx, int dx)
{
    bool retval = false;
    if (sx > dx)
    {
        retval = false;
    }
    else
    {
        int mid = (sx + dx) / 2;
        if (s.arrayList[mid] == value)
        {
            retval = true;
        }
        else
        {
            if (value > s.arrayList[mid])
            {
                retval = binary_search_rec(s, value, mid + 1, dx);
            }
            else
            {
                retval = binary_search_rec(s, value, sx, mid - 1);
            }
        }
    }
    return retval;
}

bool contains(set &s, int value)
{
    bool retval = false;
    if (!empty(s))
    {
        retval = binary_search_rec(s, value, 0, s.current_size);
    }
    return retval;
}

void print_set(set &s)
{
    cout << "\nMax length: " << s.buffer_length << endl;
    cout << "Current length: " << s.current_size << endl;
    cout << "Values: [";
    for (int i = 0; i < s.current_size; i++)
    {
        cout << s.arrayList[i] << ", ";
    }
    cout << "]" << endl;
}

void dependences(graph &g, int node)
{
    set s;
    init(s);
    stack<int> st;
    st.push(node);
    while (!st.empty())
    {
        int curr_node = st.top(); //(primo elemento dello stack)
        st.pop();                 // Rimuovo il primo elemento dallo stack
        if (!contains(s, curr_node))
        {
            for (int i = 0; i < g.number_of_nodes; i++)
            {
                if (g.adjMatrix[curr_node][i] && !contains(s, i))
                {
                    st.push(i);
                }
            }
        }
        insert(s, curr_node);
    }
    remove_element(s, node);
    cout << "Dependencies set:";
    print_set(s);
}

struct graph
{
    int **adjMatrix = nullptr;
    int number_of_nodes = 0;
};

void init(graph &g, int number_of_nodes)
{
    g.number_of_nodes = number_of_nodes;
    // Alloco una matrice number_of_nodes x number_of_nodes
    g.adjMatrix = new int *[number_of_nodes];
    for (int i = 0; i < number_of_nodes; i++)
    {
        g.adjMatrix[i] = new int[number_of_nodes]{}; // Crea e resetta i nodi
    }
}

void fill_graph(graph &g, const char *file_path)
{
    fstream in;
    in.open(file_path, ios::in);
    if (in.fail())
    {
        cerr << "File does not exists" << endl;
        exit(1);
    }
    int number_nodes;
    in >> number_nodes;

    // Creo un grafo vuoto di dimensione number_of_nodes x number_of_nodes
    init(g, number_nodes);

    int node1, node2;
    // setto a 1 la entry corrispondente all'arco node1->node2
    // così facendo faccio si che si crei il suddetto arco
    while (in >> node1 >> node2)
    {
        g.adjMatrix[node1][node2] = 1;
    }
    in.close();
}

void print_graph(graph &g)
{
    for (int i = 0; i < g.number_of_nodes; i++)
    {
        cout << i << " -> [";
        for (int j = 0; j < g.number_of_nodes; j++)
        {
            if (g.adjMatrix[i][j])
            {
                cout << j << ", ";
            }
        }
        cout << "]" << endl;
    }
}

void dealloc(graph &g)
{
    for (int i = 0; i < g.number_of_nodes; i++)
    {
        delete[] g.adjMatrix[i];
    }
    delete[] g.adjMatrix;
}
