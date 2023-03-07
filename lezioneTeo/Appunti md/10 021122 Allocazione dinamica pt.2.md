- [[Cap 08 Gestione Dinamica della Memoria.pdf]]

## Allocazione dinamica di un array multidimensionale

![[Screenshot 2022-11-02 alle 16.54.31.png]]



## Struttura di un array bidimensionale (dinamico)

![[Screenshot 2022-11-02 alle 16.55.11.png]]

```cpp
/// metodo Iterativo

void dealloca(float ** M, int d1){
	for(int i=0; i<d1; i++){
		delete [] M[i];
	}
	delete [] M;
}


/// metodo Ricorsivo

void dealloca_recur(int ** M, int i) {
	if(i < 0) {
		return;
	}
	delete [] M[i];
	dealloca_recur(M, i-1);
}

void dealloca(float ** M, int d1){
	dealloca_recur(M, d1-1);
	delete [] M;
}
```