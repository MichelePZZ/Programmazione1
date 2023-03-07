void shellsort(int a[], int n){
    int j, dist;

    for(dist = n/2; dist > 0; dist /=2){
        for(int i =dist; i < n; i++){
            j = i - dist;
            while(j >= 0){
                if(a[j] <= a[j+dist])
                    j = -1;
                else{
                    swap(a[j], a[j+dist]);
                    j -= dist;
                }
            }
        }
    }
}

void swap(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}