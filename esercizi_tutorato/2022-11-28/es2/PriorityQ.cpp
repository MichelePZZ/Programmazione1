#include "PriorityQ.h"

#include <iostream>

using std::cout;
using std::endl;

struct fake_pair{
    node3* first;
    int second;
};

priorityQueue *init(int dim) {
    priorityQueue *pq = new priorityQueue;
    pq->queue = new node3 *[dim];
    for (int i = 0; i < dim; i++) {
        pq->queue[i] = nullptr;
    }
    pq->dim = dim;
    return pq;
}


void enqueue(priorityQueue &pq, int value, int priority) {
    if(priority >= pq.dim && priority < 0){
        cout << "No priority " << priority << " exists" << endl;
    } else {
        if (pq.queue[priority] == nullptr) {
            pq.queue[priority] = new node3;
            pq.queue[priority]->value = value;
        } else {
            node3 *curr_node3 = pq.queue[priority];
            while (curr_node3->right != nullptr) {
                curr_node3 = curr_node3->right;
            }
            node3 *new_node3 = new node3;
            new_node3->value = value;
            curr_node3->right = new_node3;
            new_node3->left = curr_node3;
        }
    }
}


int dequeue(priorityQueue &pq){
    int retval = -1;
    int index = 0;
    node3* vis_node3 = pq.queue[index];
    bool extracted = false;
    while (!extracted && index < pq.dim)
    {
        if(vis_node3 != nullptr){
            node3* temp = vis_node3;
            retval = pq.queue[index]->value;
            pq.queue[index] = vis_node3->right;
            delete temp;
            extracted = true;
        }
        vis_node3 = pq.queue[++index];
    }
    return retval;
}

void dealloc(priorityQueue& pq){
    node3* curr_node3;
    for(int i = 0; i < pq.dim; i++){
        curr_node3 = pq.queue[i];
        while (curr_node3 != nullptr){
            node3* temp = curr_node3;
            curr_node3 = curr_node3->right;
            delete temp;
        }
    }
    delete [] pq.queue;
}

void print(priorityQueue &pq) {
    node3 *visiting_node3;
    for (int i = 0; i < pq.dim; i++) {
            cout << "Priority " << i <<  " -> [";
            visiting_node3 = pq.queue[i];
            if (visiting_node3 == nullptr) {
                cout << "]" << endl;
            } else {
                while (visiting_node3 != nullptr) {
                    cout << visiting_node3->value << ", ";
                    visiting_node3 = visiting_node3->right;
                }
                cout << "]" <<endl;
            }
        }
    cout << endl;
}