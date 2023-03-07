/**
 * 2- 
 * Scrivere un programma che controlli se un dato array `e un sottovettore di un altro dato array.
 */

#include <iostream>

using namespace std;

bool check (int* v1, int* v2){
    int dim_v1 = v1[-1];
    int dim_v2 = v2[-1];

    cout << dim_v1 << ", " << dim_v2 << endl;

    for (int i=0; i<dim_v1; i++){
        if (v2[0] == v1[i]){
            
            for (int j=1; j<dim_v2; j++){
                if (v2[j] != v1[i+j]){
                    return false;
                }   
            }
        }
    }

    return true;
}

int main(){
    int v1_n, v2_n;

	cout << "v1[n] : ";
	cin >> v1_n;

	int *v1 = new int(v1_n);

    for (int i = 0; i < v1_n; i++) {
	    cout << "Elemento v1[" << i << "] : ";
		cin >> v1[i];
	}

    cout << "v2[n] : ";
	cin >> v2_n;

	int *v2 = new int(v2_n);

    for (int i = 0; i < v2_n; i++) {
	    cout << "Elemento v2[" << i << "] : ";
		cin >> v2[i];
	}

    v1[-1] = v1_n;
    v2[-1] = v2_n;

    cout << "v2 in v1? " << (check (v1, v2) ? "True" : "False") << endl;    

    return 0;
}