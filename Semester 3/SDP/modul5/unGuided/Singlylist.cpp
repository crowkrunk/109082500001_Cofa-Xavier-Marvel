#include "singlylist.h"
#include <iostream>

using namespace std;

void CreateList(List &L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    P->next = Nil;
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

address findElm(List L, infotype x)
{

    address nodeBantu = L.first;
    int posisi = 0;
    while (nodeBantu != Nil)
    {
        posisi++;
        if (nodeBantu->info == x )
        {
            cout <<  x  << " ditemukan dalam list" << endl;
            return nodeBantu;
        }else{
            nodeBantu = nodeBantu -> next;
        }

    }
    cout << endl;
    return Nil;
}

infotype giveSum(List L){
    address nodeBantu = L.first;
    infotype x = 0;

    while (nodeBantu != Nil)
    {
        x = x + nodeBantu->info;
        nodeBantu = nodeBantu -> next;
    }
    cout << "Total info dari Kelima elemen adalah " << x << endl;
    return x;
};