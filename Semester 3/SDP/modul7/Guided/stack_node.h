#ifndef STACK_NODE
#define STACK_NODE
using namespace std;

#define Nil NULL

typedef struct node *address;

struct node{
    int dataAngka;
    address next;
};

typedef struct stack
{
    address top;
}S;



bool isEmpty(S s);
void createStack(S &s);
address alokasi(int angka);
void alokasi(address &node);

void push(S &s, address newdata);
void pop(S &s);
void update(S &s, int posisi);
void view(S s);
void searchData(S s, int data);

#endif