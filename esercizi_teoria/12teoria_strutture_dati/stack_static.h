#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct node {
    int val;    
    node * next;    
};

enum retval {FAIL,OK};

typedef node* stack;

void init();
void deinit();
retval push (int);
retval top (int &);
retval pop ();
void print();

#endif