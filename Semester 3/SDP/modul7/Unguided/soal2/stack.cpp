#include "Stack.h"
#include <iostream>
using namespace std;

void createStack(S &s)
{
    s.top = -1;
}

void Push(S &s, infotype x)
{
    if (s.top >= MAX - 1)
    {
        cout << "Stack overflow" << x << endl;
        return;
    }
    s.top++;
    s.info[s.top] = x;
}

infotype pop(S &s)
{
    if (s.top == -1)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    infotype temp = s.info[s.top];
    s.top--;
    return temp;
}

void printInfo(S s)
{
    if (s.top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "[TOP]";
    for (int i = s.top; i >= 0; i--)
        cout << s.info[i] << (i > 0 ? " " : "");
    cout << endl;
}

void balikStack(S &s)
{
    int temp[MAX];
    int n = 0;

    while (s.top != -1)
        temp[n++] = pop(s);

    for (int i = 0; i < n; i++)
        Push(s, temp[i]);
}

void pushAscending(S &s, infotype x)
{
    if (s.top >= MAX - 1)
    {
        cout << "Stack overflow" << x << endl;
        return;
    }

    int i = s.top;
    while (i >= 0 && s.info[i] > x)
    {
        s.info[i + 1] = s.info[i];
        i--;
    }

    s.info[i + 1] = x;
    s.top++;
}