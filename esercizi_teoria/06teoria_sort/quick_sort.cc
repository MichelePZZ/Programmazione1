int partition(int A[], int l, int r) {
    int i = l-1, j = r, v = A[r];
    while (true) {
        while (A[++i] < v);
        while (v < A[--j])
            if (j == l) break;
        if (i >= j) break;
        swap(A[i],A[j]);
    }
    swap(A[i],A[r]);
    return(i);
}

void quicksort(int A[], int N) {
    quicksort_aux(A, 0, N-1);
}

void quicksort_aux(int A[], int l, int r) {
    if (r <= l) return;
    int i = partition(A, l, r);
    quicksort_aux(A, l, i-1);
    quicksort_aux(A, i+1, r);
}


void swap(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}