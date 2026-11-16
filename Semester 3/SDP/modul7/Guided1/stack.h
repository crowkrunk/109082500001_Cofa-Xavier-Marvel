#ifndef STACK_TABLE
#define STACK_TABLE
using namespace std;
const int MAX = 10;

typedef struct stackTable
{
    int data[MAX];
    int top;
}S;

bool isEmpty(S s);
bool isFull(S s);
void createStack(S &s);
void push(S &s, int angka);
void pop(S &s);
void update(S &s, int posisi);
void view(S s);
void searchData(S s, int data);

#endif