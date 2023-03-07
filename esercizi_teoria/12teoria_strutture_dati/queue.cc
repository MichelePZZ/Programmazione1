/*
 * DESCRIZIONE:
 *     Implementazione di una coda. Gli elementi vengono inseriti in FIFO.
 *     Operazioni:
 *       - void init (queue &);
 *       - void deinit (queue &);
 *       - retval enqueue(int,queue &);
 *       - retval dequeue(queue &);
 *       - retval first(int &,const queue &);
 *       - void print (const queue &);
 * 
 *     Costanti/Variabili: 
 *       - retval: valore di ritorno possibile
 *   
 */

#include "queue.h"

void init(queue & Q) {
    Q.head = NULL;
}

void deinit(queue & Q) {
    while (!Q.head == NULL){
        dequeue(Q);
    }
}

retval enqueue(int n,queue & Q){
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

retval dequeue(queue & Q) { 
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

retval first(int &n,const queue & Q) { 
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

void print(const queue & Q){ 
    if (!Q.head == NULL) {
        node * first=Q.head;
        do {
            cout << first->val << endl;
            first = first->next;
        } while (first != NULL);
    }
}