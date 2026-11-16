#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
using namespace std;
const int MAX = 20;
#define infotype int

typedef struct stack
{
    int info[MAX];
    int top;
}S;

void createStack(S &s);
void Push(S &s, infotype x);
infotype pop(S &s);
void printInfo(S s);
void balikStack(S &s);

// 2
void pushAscending(S &s, infotype x);

#endif