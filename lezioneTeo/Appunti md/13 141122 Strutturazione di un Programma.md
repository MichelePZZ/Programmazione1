
## Scope, Visibilità e Durata di una definizione

La definizione di un oggetto (variabile, costante, tipo, funzione) ha tre caratteristiche: 
- Scope o ambito
- Visibilità
- Durata

### Scope
- Scope **globale**: definizione attiva a livello di file 
- Scope **locale**: definizione attiva localmente ad una funzione o ad un blocco di istruzioni 

### Visibilità
Stabilisce quali oggetti definiti sono visibili da un punto del codice.
> In caso di funzioni: 
> - una definizione globale è visibile a livello locale, ma non viceversa 
> - una definizione omonima locale maschera una definizione globale 

> In caso di blocchi annidati: 
> - una definizione esterna è visibile a livello interno, ma non viceversa 
> - una definizione omonima interna maschera una definizione esterna

### Durata 
> Globale o Statico: oggetto globale o dichiarato con `static` 
> - dura fino alla fine dell’esecuzione del programma 
> - memorizzato nell’area dati static

> Locale o automatico: oggetti locali a un blocco o funzione 
> - hanno sempre scope locale
> - durano solo il periodo di tempo necessario ad eseguire il blocco o funzione in cui sono definiti 
> - memorizzato nell’area stack

> Dinamico: oggetti allocati e deallocati da `new/delete` 
> - hanno scope determinato dalla raggiungibilità dell’indirizzo. 
> - durata gestita dalle chiamate a new e delete: durano fino alla deallocazione con delete o alla fine del programma 
> - dimensione non prevedibile a tempo di compilazione 
> - memorizzati nell’area heap


