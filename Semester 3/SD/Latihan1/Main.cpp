#include <iostream>
using namespace std;

typedef struct node *address;

struct node {
    int data;
    address Next;
    address prev;
};

struct list{
    address first;
    address last;
};

typedef list L;

void dealokasi(address &P) {
    if (P == NULL) return;
    
    // Handle doubly linked list removal
    if (P->prev != NULL) {
        P->prev->Next = P->Next;
    }
    if (P->Next != NULL) {
        P->Next->prev = P->prev;
    }
    
    delete P;  // Actually free the memory
    P = NULL;  // Reset pointer
}

void deleteEvenNumber(L &l) {
    address P = l.first;
    while (P != NULL) {
        address temp = P;
        P = P->Next;
        if (temp->data % 2 == 0) {
            dealokasi(temp);
        }
    }
}