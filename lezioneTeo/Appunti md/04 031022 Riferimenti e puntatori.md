Lezione 3 ottobre 2022
Slide: [[Cap 04 Riferimenti e puntatori.pdf]]

## Aree di memoria

### *Stack* 
memorizza variabili del programma. Al aumentare delle variabili lo stack aumenta. Il secondo caso un cui aumenta è l'utilizzo delle funzioni che contengono le varibili locali e le variabili ausiliare che contengono l'indirizzo di ritorno della funzione. 
Lo stack ha una dimensione massima. WIn e MacOS (ulimit -a: comando per vedere data segment size,stack size,...) ha una dimensione fissa hardcoded che può essere modificata entro certi limiti tramite comandi (Nota: bisogna modificare anche l'eseguibile del programma dopo questa operazione). Su UNIX la dimensione dello stack è dinamica e non serve modificare l'eseguibile 

### *Heap*  
salva strutture dati come array ecc. dove non so a priori la grandezza 



# Il Tipo “Riferimento a”
- l meccanismo dei riferimenti (reference) consente di dare nomi multipli a una variabile (o a un’espressione dotata di indirizzo)
	- Un riferimento è un sinonimo dell’espressione a cui fa riferimento ⇒ modificando l’una, si modifica anche l’altra ([[Aliasing|"aliasing”]])
	- Un riferimento è un’espressione dotata di indirizzo
- Sintassi: `tipo & id = exp; 
  dove `exp` è un’espressione dotata di indirizzo
![[Schermata 2022-10-03 alle 12.03.52.png]]
### L’Operatore address-of “&”
- L’operatore & (“address-of”) ritorna l’indirizzo (l-value [[LValues & RValues]]) dell’espressione a cui è applicato
- Può essere applicato solo a espressioni dotate di indirizzo! 
- È differente dall’uso di “&” nella definizione di riferimenti!

*Esempio*
``` cpp
int l = 10; cout << &l << endl; // stampa l’indirizzo di l
cout << &(l*5) << endl; // errore! 
int n = 10; int& r = n; // r e’ alias di n, ‘‘punta’’ stessa area di memoria 
cout << "&n = " << &n << ", &r = " << &r << endl;
```


# Il Tipo “Puntatore a...”
- Un puntatore contiene l’indirizzo di un altro oggetto
	- l’[[LValues & RValues|r-value]] di un puntatore è un indirizzo
- Definizione di un puntatore:
	- Sintassi: `tipo *id_or_init
	- Esempio: `int *px; //px puntatore a un intero`
	- È sempre necessario indicare il tipo di oggetto a cui punta
- Un puntatore a tipo T può contenere solo indirizzi di oggetti di tipo T
- Ad una variabile puntatore viene associata una spazio di memoria atto a contenere un indirizzo di memoria
	- ...ma non viene riservato spazio di memoria per l’oggetto puntato!
- Lo spazio allocato a una variabile di tipo puntatore è sempre uguale, indipendentemente dal tipo dell’oggetto puntato
	- `sizeof(int *) == sizeof(long double *) == sizeof(char *) == sizeof(T *)` per ogni tipo (base o derivato) T


## L’Operatore di Dereference “\*”
- Per accedere all’oggetto puntato da una variabile puntatore occorre applicare l’operatore di dereference \*
- Se px punta a x, \*px è un sinonimo temporaneo di x ⇒ modificando \*px modifico x, e vice versa
- \*px è un’espressione dotata di indirizzo

*Esempio*
``` cpp
int *px; // px variabile puntatore a tipo int 
px=&x; // accede alla variabile puntatore 
*px=x+1; // accede alla cella di memoria puntata 
         // dalla variabile puntatore
