#include <iostream>
#include <stack>

using namespace std;

stack<int> coda, tmp;
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
    coda.push(a);
}

int pop()
{
    int res;

    while(!coda.empty())
        tmp.push(coda.top()),
        coda.pop();

    if (tmp.empty())
        return INT32_MAX;

    res = tmp.top();
    tmp.pop();
    
    while(!tmp.empty())
        coda.push(tmp.top()),
        tmp.pop();

    return res;
}
