/**
 * 16- Tris
 * Implementare a piacimento il gioco Tris usando le matrici.
 */

#include <iostream>

using namespace std;

enum cella
{
    vuoto,
    X,
    O
};

bool vittoria(cella campo[3][3]);
bool mossa(cella campo[3][3], int x, int y, bool giocatore1);
void print(cella campo[3][3]);

int main(int argc, char const *argv[])
{
    cella campo[3][3] = {vuoto};
    bool giocatore1 = false;
    int mosse = 0;

    while (!vittoria(campo))
    {
        print(campo);

        giocatore1 = !giocatore1; // cambio giocatore;
        int x, y;

        cout << "Inserire cordinata X del giocatore " << (giocatore1 ? "1" : "2") << ": ";
        cin >> x;
        cout << "Inserire cordinata Y del giocatore " << (giocatore1 ? "1" : "2") << ": ";
        cin >> y;

        if (!mossa(campo, x, y, giocatore1))
            cout << "Mossa illecita, perdi il tuo turno" << endl;
        else
            mosse++;
    }

    print(campo);

    if (vittoria(campo))
        cout << "Vittoria del giocatore " << (giocatore1 ? "1" : "2") << endl;
    else
        cout << "Pareggio" << endl;

    return 0;
}

bool vittoria(cella campo[3][3])
{
    for (size_t i = 0; i < 3; ++i)
        if (campo[i][0] == campo[i][1] && campo[i][0] == campo[i][2]
            && campo[i][0] != vuoto)
            return true;

    for (size_t i = 0; i < 3; ++i)
        if (campo[0][i] == campo[1][i] && campo[0][i] == campo[2][i] &&
            campo[0][i] != vuoto)
            return true;

    if (campo[0][0] == campo[1][1] && campo[0][0] == campo[2][2] &&
        campo[0][0] != vuoto)
        return true;

    if (campo[0][2] == campo[1][1] && campo[0][2] == campo[2][0] &&
        campo[0][2] != vuoto)
        return true;

    return false;
}

bool mossa(cella campo[3][3], int x, int y, bool giocatore1)
{
    if (campo[x][y] != vuoto)
        return false;

    campo[x][y] = giocatore1 ? X : O;
    return true;
}

void print(cella campo[3][3])
{
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
            cout << (campo[i][j] == vuoto ? "_ " : (campo[i][j] == X ? "X " : "O "));
        cout << endl;
    }
}
