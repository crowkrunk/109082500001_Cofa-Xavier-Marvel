#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#define Nil NULL
using namespace std;

typedef int infotype;
struct ElmList;
typedef ElmList* address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void printInfo(List L);
int nbList(List L);

#endif