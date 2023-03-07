#ifndef QUEUE_STATIC_H
#define QUEUE_STATIC_H

#include <iostream>
using namespace std;

struct node {
    int val;    
    node * next;    
};

struct queue {
    node * tail;
    node * head;
};

enum retval { FAIL, OK };

void init ();
void deinit ();
retval enqueue(int);
retval dequeue();
retval first(int &);
void print ();

#endif