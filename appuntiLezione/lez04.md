# Riferimenti e puntatori

## Riferimento
Il meccanismo dei riferimenti consente di dare nomi multipli a una variabile. Un riferimento è un'espressione dotata di indirizzo.

### Vincoli
1. Nelle dichiarazioni di reference, l'inizializzazione è obbligatoria.
2. Non è possibile ridefinire una variabile di tipo rifermento.
3. Non è possibile edefinire un riferimento a un'espressione non dotata di indirizzo e non è possibile definire un riferimento a un'espressione di tipo diverso.

### Operatore address-of (&)
L'operatore & ritorna l'indirizzo (l-value) dell'espressione a cui è applicato.

## Puntatore
Un puntatore contiene l'indirizzo di un altro oggetto.
Ad una variabile puntatore viene associata uno spazio di memoria atto a contenere un indirizzo di memoria.

### Operatore di Dereference (*)
Per accedere all'oggetto da una variabile puntatore occorre applicare l'operatore di dereference.