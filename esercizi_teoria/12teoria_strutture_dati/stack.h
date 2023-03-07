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

void init(stack &);
void deinit(stack &);
retval push (int, stack &);
retval top (int &, const stack &);
retval pop (stack &);
void print(const stack &);
void insert_node_balanced(tree & radice, int val[], int i_min, int i_max);

#endif