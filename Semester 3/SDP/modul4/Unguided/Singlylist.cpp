#include "Singlylist.h"
#include <iostream>

using namespace std;

// Inisialisasi list kosong
void CreateList(List &L) {
    L.first = Nil;
}

// Alokasi memori untuk elemen baru
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

// Dealokasi (mengembalikan memori ke sistem)
void dealokasi(address &P) {
    P->next = Nil;
    delete P;
    P = Nil;
}

// Menyisipkan di awal list
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

// Menyisipkan di akhir list (opsional, untuk kelengkapan)
void insertLast(List &L, address P) {
    if (L.first == Nil) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != Nil) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

// Menampilkan isi list
void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Menghitung jumlah elemen
int nbList(List L) {
    address P = L.first;
    int count = 0;
    while (P != Nil) {
        count++;
        P = P->next;
    }
    return count;
}