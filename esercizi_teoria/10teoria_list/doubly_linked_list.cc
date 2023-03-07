/* 
 * DESCRIZIONE:
 *     Liste doppiamente concatenate.
 * 
 *     Operazioni:
 *       - list createList(int info[], int dim);
 *       - void insert_node(list, list);
 *       - list remove(list);
 *       - void remove(list);
 */


#include <iostream>
using namespace std;

struct node {
    int val;
    node* prev;
    node* next;
};

typedef node* list;

list createList(int info[], int dim){
    list firstNode;

    if(dim > 0){
        firstNode = new node{info[0], NULL, NULL};
        list prevNode = firstNode;
        list currentNode = NULL;

        for(int i=0; i < dim; i++){
            currentNode = new node{info[i], NULL, NULL};
            currentNode->prev = prevNode;
            prevNode->next = currentNode;
            prevNode = currentNode;
        }
    }

    return firstNode;
}

void insert_node(list x, list t){
    t->next = x->next;
    t->next->prev = t;
    t->prev = x;
    t->next = t;
}

// function
list remove(list t){
    t->next->prev = t->prev;
    t->prev->next = t->next;
    t->next = t->prev = NULL;
    return t;
}

// procedure
void remove(list t){
    t->next->prev = t->prev;
    t->prev->next = t->next;

    delete t;
}