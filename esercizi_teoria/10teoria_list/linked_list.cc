/*
 * DESCRIZIONE:
 *     Lista concatenata.
 * 
 *     Operazioni:
 *       - int length(list);                // iterative & recursive
 *       - void insert_node(list, list);
 *       - void insert_first(list&, int);
 *       - list insert_first(list, int);
 *       - void insert_last(list&, int);
 *       - void remove_first(list&);
 *       - list remove_element(list);
 *       - void search_remove(list&, int);
 *       - list reverse(list);
 *       - void deallocalist(list n);       // iterative & recursive
 */


#include <iostream>
using namespace std;

struct node {
    int val;    
    node * next;    
};

typedef node* list;

// iterative
int length (list s){
    int l = 0;
    for(; s != NULL; s = s -> next) l++;
    return l;
}

// recursive
int length(list s){
    int l = 0;
    if(s==NULL) return 0;
    return l + length(s -> next);
}

void insert_node(list x, list t){
    t->next = x->next;
    x->next = t;
}

// procedure
void insert_first(list&s, int v){
    list n = new node;
    n->val = v;
    n->next = s;
    s=n;
}

// function
list insert_first(list s, int v) {
    list n = new node;
    n->val = v;
    n->next = s;
    return n; 
}

// verificare che la lista non sia vuota.
void insert_last(list&p, int n){
    list r = new node;
    r->val = n;
    r->next = NULL;
    if(p!= NULL){
        node* q = p;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = r; 
    }
    else{
        p=r;
    }
}

void remove_first(list& s){
    list n = s;
    if(s != NULL){
        s = s->next;
        delete n;
    }
}

list remove_element(list x){
    list y = x->next;
    y->next = NULL;
    return y;
}

void search_remove(list&p, int val){
    if (p != NULL) {
        list q = p;
        if (q->val == val) {
            p = p->next;
            delete q;
        }
        else {
            while(q->next != NULL) {
                if (q->next->val == val) {
                    list r = q->next;
                    q->next = q->next->next;
                    delete r;
                    return;
                }
                if (q->next != NULL) {
                    q=q->next;
                }
            }
        }
    }
}

list reverse(list x) {
    list t;
    list y = x;
    list r = NULL;
    while ( y != NULL ) {
        t = y->next;
        y->next = r;
        r = y;
        y = t;
    }
    return r;
}


// iterative
void deallocalist(list n){
    list t = new node;
    while(n != NULL){
        t = n;
        n = n->next;
        delete t;
    }
}

// recursive
void deallocalist(list n){
    if(n == NULL) return;
    deallocalist(n->next);
    delete n;
}