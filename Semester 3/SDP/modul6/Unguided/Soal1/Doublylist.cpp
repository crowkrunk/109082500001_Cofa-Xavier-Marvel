#include "Doublylist.h"

void CreateList(List &L) {
    L.first = Nil;
    L.last = Nil;
}

address alokasi(infotype x) {
    address P = new elmlist;
    if (P != Nil) {
        P->info = x;
        P->next = Nil;
        P->prev = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    if (L.first == Nil) {
        cout << "Data LIST kosong" << endl;
        return;
    }
    address P = L.first;
    int i = 1;
    while (P != Nil) {
        cout << "no polisi   : " << P->info.nopol << endl;
        cout << "warna      : " << P->info.warna << endl;
        cout << "tahun      : " << P->info.thnBuat << endl;
        P = P->next;
        i++;
    }
}

void insertLast(List &L, address P) {
    if (L.first == Nil) {
        // list masih kosong
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        P->next = Nil;
        L.last->next = P;
        L.last = P;
    }
}
