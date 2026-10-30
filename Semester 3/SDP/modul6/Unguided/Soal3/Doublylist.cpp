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

address findElm(List L, infotype x){
    address P = L.first;
    while (P != Nil && P->info.nopol != x.nopol) {
        P = P->next;
    }
    return P;
}

void deleteFirst(List &L, address &P) {
    P = L.first;
    if (L.first == L.last) {
        // hanya satu elemen
        L.first = Nil;
        L.last = Nil;
    } else {
        L.first = L.first->next;
        L.first->prev = Nil;
        P->next = Nil;
    }
    dealokasi(P);
}

void deleteLast(List &L, address &P) {
    P = L.last;
    if (L.first == L.last) {
        L.first = Nil;
        L.last = Nil;
    } else {
        L.last = L.last->prev;
        L.last->next = Nil;
        P->prev = Nil;
    }
    dealokasi(P);
}

void deleteAfter(address Prec, address &P) {
    if (Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != Nil)
            P->next->prev = Prec;
        P->prev = Nil;
        P->next = Nil;
        dealokasi(P);
    }
}