/**
 * 7- 
 * Scrivere un programma che, dato in input un numero binario N, ritorni a video il complemento di questo numero binario. 
 * Ad esempio, dato in input il numero 110101, il programma dovra dare in output il numero 001010.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, complemento = 0;
    cout << "Insersci un numero binario : ";
    cin >> n;

    for(int i=0; n != 0; i++){
        complemento += (!(n % 2)) * pow(10,i);
        n /= 10;
    }

    cout << "Complemento : " << complemento << endl;

    return 0;
}
