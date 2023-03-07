/*
 * DESCRIZIONE:
 *     Implementazione di una pila. Gli elementi vengono inseriti in LIFO.
 *     Operazioni:
 *       - void init(stack &);
 *       - void deinit(stack & );
 *       - retval push (int, stack &);
 *       - retval top (int &, const stack &);
 *       - retval pop (stack &);
 *       - void print(const stack &);
 * 
 *     Costanti/Variabili: 
 *       - retval: valore di ritorno possibile
 */

#include "stack.h"

void init(stack & s) {
    s = NULL;
}

void deinit(stack & s) {
    while (s != NULL){
        pop(s);
    }
}

retval push (int n,stack & s) {
    retval res;
    node* np = new node;

    if (np==NULL)
        res = FAIL;
    else {
        np -> val = n;
        np -> next = s;
        s = np;
        res = OK;
    }

    return res;
}

retval top (int &n, const stack & s) {
    retval res;
    if (s == NULL){
        res=FAIL;
    }
    else {
        n=s -> val;
        res=OK;
    }
    return res;
}

retval pop (stack & s) {
    retval res;
    if (s == NULL){
        res=FAIL;
    }
    else {
        node* first = s;
        s = s -> next;
        delete first;
        res=OK;
    }		
    return res;
}

void print (const stack & s){
    node* first = s;
    while (first!=NULL) {
        cout << first->val << endl;
        first = first -> next;
    }
}