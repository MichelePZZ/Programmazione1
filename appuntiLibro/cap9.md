# Stringhe
## 9.2 Lettura di stringhe
Per leggere una sequenza di caratteri che comprende spazi bianchi si deve utilizzare la funzione di libreria ***getline()*** invece che l'operatore >>.

    es. cin.getline(var_str, max_lung_string, 'terminatore');

La funzione ***get()*** legge dal flusso carattere per carattere.

    es. char car;
        while(cin.get(car)){
            ...
        }

La funzione ***put()*** scrive nel flusso carattere per carattere.  
La funzione ***putback()*** rimette nel flusso di input l'ultimo carattere letto, mentre la funzione ***ignore()*** lo ignora.  
La funzione ***peek()*** può essere utilizzata al posto della combinazione get() e putback().

## 9.3 Array e stringhe come parametri di funzioni

    funzione => int estrarre(char* output, char*input){}
    chiamata => estrarre(output, input);

# 9.4 La libreria cstring

    strcpy(s1, s2) -> copia i caratteri della string s2 nella string s1
    strlen() -> restituisce la lunghezza della string
    ...

# 9.5 Conversione di stringhe a numeri

    int atoi(const char* str)
    double atof(const char* str)
    long atol(const char* str)