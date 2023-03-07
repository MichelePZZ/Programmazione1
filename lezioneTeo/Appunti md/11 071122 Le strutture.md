slide: [[Cap 09 Le Strutture.pdf]]

#struct

## Caratteristiche
- Una struttura è una collezione ordinata di elementi non omogenei 
	- Gli elementi sono detti membri o campi 
	- Ciascun campo ha uno specifico tipo, nome e valore 
- Permette di definire nuovi tipi di oggetti aggregati 
	- La struttura può essere utilizzata come un oggetto unico 
	- I campi possono essere utilizzati singolarmente 
- Ciascun campo può essere a sua volta un tipo struttura



## Sintassi

```cpp
struct new_struct_id {
	tipo1 campo1; 
	...
	tipoN campoN; 
}; 

new_struct_id var_id; 


/// Esempio: 
struct complex { // definizione del tipo "complex" 
	double re; // campo "reale" 
	double im; // campo "immaginario" 
}; 

complex c,c1; // definizione di variabili di tipo "complex"
```


_Esempi di **strutture annidate:**_

```cpp
struct data {
	int giorno, mese, anno; 
}; 

struct persona {// struttura annidata
	char nome[25], cognome[25];
	char comune_nascita[25]; 
	data data_nascita; 
	enum { F, M } sesso; 
}; 

struct studente { // struttura ulteriormente annidata 
	persona generalita; 
	char matricola[10]; 
	int anno_iscrizione;
};
```


> [!note] Strutture mutualmente ricorsive
> Posso prima dichiarare una struct senza definirla immediatamente. In questo modo posso creare delle strutture mutualmente ricorsive
> 
> La seguente definizione **NON è lecita**:
> ```cpp
> struct S1 { 
> 	int value; 
> 	S2 *next; 
> };  //S2 ancora indefinito 
> struct S2 {
> 	int value; 
> 	S1 *next; 
> };
> ```
>
> La seguente definizione **è lecita**:
> ```cpp
> struct S2; // dichiarazione di S2 
> struct S1 {
> 	int value; 
> 	S2 *next; 
> }; // Ok! 
> struct S2 { // definizione di S2 
> 	int value; 
> 	S1 *next;
> };



## Inizializzazione di variabili di tipo struct

```cpp
struct data { 
	int giorno, mese, anno;
}; 

struct persona {
	char nome[25], cognome[25];
	char comune_nascita[25]; 
	data data_nascita; 
	enum { F, M } sesso; 
};

persona x = {"Paolo", "Rossi", "Trento", {21,10,1980}, M };
```
