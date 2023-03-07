/*
 * DESCRIZIONE:
 *     Gli alberi sono grafi non orientati nel quale 2 vertici qualsiasi sono connessi da un solo cammino.
 *       - tree init(int val[], int dim);   // init per alberi bilanciati (dato un array ordinato)
 *       - void insert_node_balanced(tree & radice, int val[], int i_min, int i_max);
 *       - void insert(tree & t, int val);
 *       - tree cerca (const tree &, int);
 *       - void print_ordered(const tree &);
 *       - void print_indented(const tree &);
 *       - void deinit(tree &);
 *       - int getElemenentNumbers(tree radice);
 *       - char *toArray(tree radice, int &size);
 *       - void toArray_aux(tree radice, char *a, int &pos);
 */


#include <iostream>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
};

typedef node* tree;

// Per la creazione di alberi bilanciati, data un'array ordinato e la sua dimensione.
tree init(int val[], int dim){
    tree radice = NULL;
    insert_node_balanced(radice, val, 0, dim-1);
    return radice;
}

// procedura che inserisce degli interi gia ordinati nell'albero bilanciato
void insert_node_balanced(tree & radice, int val[], int i_min, int i_max){
    if(i_min <= i_max){
        radice = new node {val[(i_max+i_min)/2], NULL, NULL};
        insert_node_balanced(radice->left, val, i_min, (i_max+i_min)/2 - 1);
        insert_node_balanced(radice->right, val, (i_max+i_min)/2 + 1, i_max);
    }
}

void deinit(tree & t) {
    if (t != NULL){
        deinit(t->left);
        deinit(t->right);
        delete t;
    }
}

void insert(tree & t, int val) {
    if (t == NULL) {
        t = new node;
        t->val = val;
        t->left = NULL; 
        t->right = NULL;
    }
    else if (t->val <= 0){
        insert(t->left, val);
    } 
    else if (t->val > 0) 
        insert(t->right, val);
}

tree cerca(const tree & t, int c) { 
    tree res;
    if (t == NULL) 
        res = NULL;
    else if (c == t->val) 
        res = t;
    else if (c < t->val) 
        res = cerca(t->left,c);
    else if (c > t->val)
        res = cerca(t->right,c);
    return res;
}

void print_ordered(const tree & t) {
    if (t != NULL) {
        print_ordered(t->left);
        cout << t->val;
        print_ordered(t->right);
    }
}

// print indented
// ATTENZIONE! Uso di static.
static void print_spaces(int depth) {
    for(int i=0;i<depth;i++) 
        cout << "  ";
}

void print_indented(const tree & t) { 
    static int depth=0;
    depth++;
    if (t != NULL) {
        print_indented(t->right);
        print_spaces(depth);
        cout << t->val;
        print_indented(t->left);
    }
    depth--;
}

int getElemenentNumbers(tree radice)
{
    int res = 0;
    if (radice != NULL)
        res = (true ? 1 : 0) + getElemenentNumbers(radice->left) + getElemenentNumbers(radice->right);
        // TODO: change true con la condizione

    return res;
}

void toArray_aux(tree radice, char *a, int &pos)
{
    if (radice != NULL)
    {
        toArray_aux(radice->left, a, pos);
        if (true) // TODO: change true con la condizione
            a[pos++] = radice->val;
        toArray_aux(radice->right, a, pos);
    }
}

char *toArray(tree radice, int &size)
{
    size = getElemenentNumbers(radice);
    char *a = new char[size];
    int pos = 0;
    toArray_aux(radice, a, pos);

    return a;
}

void reverse_key(tree old_radice,tree& new_radice){
    if(old_radice==nullptr){
        new_radice = nullptr;
    }else{
        new_radice = new node{old_radice->val,nullptr,nullptr};
        reverse_key(old_radice->right,new_radice->left);
        reverse_key(old_radice->left,new_radice->right);
    }
}

int main(){
    tree old=nullptr;
    tree ne=nullptr;
    insert(old,5);
    insert(old,4);
    insert(old,6);
    insert(old,3);
    insert(old,7);
    insert(old,2);
    insert(old,8);
    print_indented(old);
    reverse_key(old,ne);
    print_indented(ne);
    deinit(old);
    deinit(ne);
    return 0;
}