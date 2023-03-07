/**
 * 9- 
 * Scrivere un programma che, generata una lettera dell’alfabeto (maiuscola o minuscola) in modo casuale, 
 * chieda all’utente di indovinare suddetta lettera. Il programma terminera solo se l’utente avra indovinato.
 * Nota: in questo caso, e consentito l’utilizzo della funzione rand() della libreria <cstdlib>.
 */

#include <iostream>
#include <cstdlib>

using namespace std;
char c, user;

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    if (rand() > (RAND_MAX / 2)) // lettere maiscole
    {
        c = 'A' + rand() % ('Z' - 'A' + 1);
    }
    else // lettere minuscole
    {
        c = 'a' + rand() % ('z' - 'a' + 1);
    }

    // cout << c << endl; // DEBUG only

    do {
        cout << "Inserisci un carattere: ";
        cin >> user;
    } while (user != c);

    cout << "Bravo!!!" << endl;    

    return 0;
}
