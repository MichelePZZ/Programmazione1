#include <iostream>
#include <vector>

using namespace std;

vector<int> pila(1);
int _size = 1, _pos = -1;
void push(int a);
int pop();

int main(int argc, char const *argv[])
{
    cout << "Insert: 1, 2 and 3" << endl;
    
    push(1);
    push(2);
    push(3);

    cout << "Reading data: " << endl;

    for (size_t i = 0; i < 3; ++i)
    {
        cout << pop() << endl;
    }

    return 0;
}

void push(int a)
{
    if (_pos + 1 <=_size)
    {
        pila.resize(_size * 2);
        _size *= 2;
    }
    pila[++_pos] = a;
}

int pop()
{
    if (_pos != -1)
        return pila[_pos--];
    return INT32_MIN;
}
