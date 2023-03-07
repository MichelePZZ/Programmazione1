/*
 * DESCRIZIONE:
 *     Implementazione di una coda statica. Gli elementi vengono inseriti in FIFO.
 *     Operazioni:
 *       - void init ();
 *       - void deinit ();
 *       - retval enqueue(int);
 *       - retval dequeue();
 *       - retval first(int &);
 *       - void print ();
 * 
 *     Costanti/Variabili: 
 *       - retval: valore di ritorno possibile
 *   
 */

#include "queue_static.h"

static queue Q;

void init() {
    Q.head = NULL;
}

void deinit() {
    while (Q.head != NULL){
        dequeue();
    }
}

retval enqueue(int n){
    retval res;
    node * np = new node;
    if (np==NULL)
        res = FAIL;
    else {

        np->val=n;
        np->next=NULL;

        if (Q.head == NULL) {
            Q.head=np;
        } else {
            Q.tail->next=np;
        }

        Q.tail=np;
        res = OK;
    }
    return res;
}

retval dequeue() { 
    retval res;
    if (Q.head == NULL){
        res=FAIL;
    }
    else {
        node * first;
        first = Q.head;
        Q.head = Q.head->next;

        delete first; 
        res=OK;
    }

    return res;
}

retval first(int &n) { 
    retval res;
    if (Q.head == NULL){
        res = FAIL;
    }
    else {
        n = Q.head->val;
        res = OK;
    }

    return res;
}

void print(){ 
    if (!Q.head == NULL) {
        node * first=Q.head;
        do {
            cout << first->val << endl;
            first = first->next;
        } while (first != NULL);
    }
}