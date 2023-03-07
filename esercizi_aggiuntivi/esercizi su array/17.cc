/**
 * 17- Battaglia Navale
 * Implementare a piacimento il gioco Battaglia Navale usando le matrici.
 */

#include <iostream>
#include <cstdlib>

#define MAP_SIZE 10

using namespace std;

enum cella
{
    acqua,
    nave,
    nave_colpita
};

void inserisci_nave(cella mappa[MAP_SIZE][MAP_SIZE], int len);
void print(cella mappa[MAP_SIZE][MAP_SIZE]);
void prova(cella mappa[MAP_SIZE][MAP_SIZE], int x, int y);
bool win(cella mappa[MAP_SIZE][MAP_SIZE]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    cout << "Battaglia navale solo" << endl;
    cout << "Trova nella mappa " << MAP_SIZE << "x" << MAP_SIZE << " le 5 navi di lunghezza (1, 2, 3, 4, 5)" << endl;

    cella mappa[MAP_SIZE][MAP_SIZE] = {acqua};
    
    for (size_t i = 1; i < 6; ++i)
        inserisci_nave(mappa, i);

    print(mappa);

    while (!win(mappa))
    {
        int x, y;
        cout << "Inserire X [0,9]: ";
        cin >> x;
        cout << "Inserire Y [0,9]: ";
        cin >> y;
        prova(mappa, x, y);
        print(mappa);
    }

    cout << "Vittoria!!!" << endl;

    return 0;
}

void print(cella mappa[MAP_SIZE][MAP_SIZE])
{
    for (size_t i = 0; i < MAP_SIZE; ++i)
    {
        for (size_t j = 0; j < MAP_SIZE; ++j)
            cout << (mappa[i][j] == nave ? "X " : "? ");
        cout << endl;
    }
}

void inserisci_nave(cella mappa[MAP_SIZE][MAP_SIZE], int len)
{
    bool dir = rand() % 2; // | = false - = true
    int x = rand() % (dir ? MAP_SIZE - len + 1 : MAP_SIZE);
    int y = rand() % (dir ? MAP_SIZE : MAP_SIZE - len + 1);

    for (int i = x - 1; i <= x + 1 + (dir ? len : 0); ++i)
        for (int j = y - 1; j <= y + 1 + (dir ? 0 : len); ++j)
            if (i >= 0 && j >= 0)
                if (mappa[i][j] != acqua)
                {
                    inserisci_nave(mappa, len);
                    return;
                }

    if (dir)
        for (int i = x; i <= x + len; ++i)
            mappa[i][y] = nave;
    else
        for (int i = y; i <= y + len; ++i)
            mappa[x][i] = nave;
}

void prova(cella mappa[MAP_SIZE][MAP_SIZE], int x, int y){
    if (mappa[x][y] == nave){
        mappa[x][y] = nave_colpita;
        cout << "Nave colpita" << endl;
    } else {
        cout << "Le navi sono ancora integre, riprova..." << endl;
    }
}

bool win(cella mappa[MAP_SIZE][MAP_SIZE])
{
    for (size_t i = 0; i < MAP_SIZE; ++i)
        for (size_t j = 0; j < MAP_SIZE; ++j)
        if (mappa[i][j] == nave)
            return false;
    return true;
}
