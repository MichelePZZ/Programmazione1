#ifndef QUEUE_H
#define QUEUE_H

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

void init (queue &);
void deinit (queue &);
retval enqueue(int,queue &);
retval dequeue(queue &);
retval first(int &,const queue &);
void print (const queue &);

#endif