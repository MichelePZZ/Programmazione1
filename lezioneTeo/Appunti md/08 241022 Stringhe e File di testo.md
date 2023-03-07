Slide: [[Cap 07 Stringhe e File di testo.pdf]]

# Stringhe

Sono array di caratteri il cui ultimo elemento è un **carattere speciale** `'\0'`. 

```cpp
char stringa[] = {'C', 'i', 'a', 'o', '\0'};
```

Una forma più semplice di definizione prevede l'utilizzo dei doppi apici.

```cpp
char stringa[] = "Ciao";
```

> [!warning] Attenzione!
> **Non è possibile fare assegnazioni fra stringhe** se non utilizzo l'oggetto Stringa. Perciò devo trattare le variabili contenenti stringhe come array di caratteri con tutto quello che implica (es. cicli, ecc..)


##  Input e Output di Stringhe

Gli operatori di I/O >>, << sono stati estesi perciò sono in grado di operare direttamente su stringhe!

>L’ operatore di **input >>**: 
>1. legge caratteri da cin 
>2. li memorizza in sequenza finché non incontra una spaziatura (che non viene letta) 
>3. memorizza ’\0’ nella stringa dopo l’ultimo carattere letto 
>4. termina l’operazione 

> L’ operatore di **output <<** scrive in sequenza su cout i caratteri della stringa, fino al primo ’\0’ (che non viene scritto)
