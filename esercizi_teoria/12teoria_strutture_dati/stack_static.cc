/*
 * DESCRIZIONE:
 *     Implementazione di una pila. Gli elementi vengono inseriti in LIFO.
 *     Operazioni:
 *       - void init();
 *       - void deinit();
 *       - retval push (int);
 *       - retval top (int &);
 *       - retval pop ();
 *       - void print();
 * 
 *     Costanti/Variabili: 
 *       - retval: valore di ritorno possibile
 */

#include "stack_static.h"

static stack s;

void init() {
    s = NULL;
}

void deinit() {
    while (s != NULL){
        pop();
    }
}

retval push (int n) {
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

retval top (int &n) {
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

retval pop () {
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

void print (){
    node* first = s;
    while (first!=NULL) {
        cout << first->val << endl;
        first = first -> next;
    }
}