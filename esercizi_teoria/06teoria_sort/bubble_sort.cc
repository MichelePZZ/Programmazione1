void bubblesort(int a[], int n){
    bool continua = true;
    for (int i = 0; i < n-1 && continua; i++){
        continua = false;

        for (int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                continua = true;
                swap(a[j], a[j+1]);
            }
        }
    }
}

void swap(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}