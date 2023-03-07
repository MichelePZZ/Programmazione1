#ifndef PRIORITYQUEUE_PRIORITYQ_H
#define PRIORITYQUEUE_PRIORITYQ_H

#include <iostream>

struct node3{
    int value;
    node3* left = nullptr;
    node3* right = nullptr;
};

struct priorityQueue{
    node3** queue;
    int dim;
};

priorityQueue* init(int dim);
void enqueue(priorityQueue& pq, int value, int priority);
int dequeue(priorityQueue& pq);
void print(priorityQueue& pq);
void dealloc(priorityQueue& pq);

#endif 
