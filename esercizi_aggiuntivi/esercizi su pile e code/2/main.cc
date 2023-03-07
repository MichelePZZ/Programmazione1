// coda senza ciclicità, usare con responsabilità

#include <iostream>
#include <vector>

using namespace std;

vector<int> coda(1);
int _begin = 1, _end = -1, _size = 1;
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
    if (_end + 1 <= _size)
    {
        coda.resize(_size * 2);
        _size *= 2;
    }
    coda[++_end] = a;
}

int pop()
{
    if (_end >= _begin)
        return coda[_begin++];
    return INT32_MAX;
}
