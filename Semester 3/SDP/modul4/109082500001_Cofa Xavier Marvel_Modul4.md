# <h1 align="center">Laporan Praktikum Modul 4 - SINGLY LINKED LIST</h1>

<p align="center">Cofa Xavier Marvel - 109082500001</p>

## Dasar Teori
Linked list adalah struktur data berupa serangkaian elemen data yang saling berkait (berhubungan) dan bersifat fleksibel — dapat tumbuh dan mengerut sesuai kebutuhan.

## Guided

### 1. Header

```h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef struct Node *address;

struct student {
    int age;
    string name, id;
};

struct Node {
    student data;
    address next;
};

struct LinkedList {
    address first;
};

bool isEmpty(LinkedList L);
void createList(LinkedList &L);
address alokasi(int age, string name, string id);
void dealokasi(address &P);
void printList(LinkedList L);
void insertFirst(LinkedList &L, address P);
void insertAfter(LinkedList &L, address Prev, address P);
void insertLast(LinkedList &L, address P);

void delfirst(LinkedList &L);
void delAfter(LinkedList &L, address Prev, address P);
void delLast(LinkedList &L);
int nbList(LinkedList L);
void delList(LinkedList &L);
#endif
```
Ini adalah file header C++ yang mendefinisikan struktur data student beserta deklarasi fungsi yang digunakan untuk memodifikasi, menampilkan, dan memvalidasi datanya di seluruh proyek.

### 2. Implentasi

```C++
#include "List.h"
#include <iostream>
using namespace std;
// Implementasion of the functions declared in List.h

// Function to check if the linked list is empty
bool isEmpty(LinkedList L){
    if (L.first == Nil){
        return (L.first == Nil);
    } else {
        return (L.first == Nil);
    }
};
// Function to create an empty linked list
void createList(LinkedList &L){
    L.first = Nil;
};
// Function to allocate a new node with the given student data
address alokasi(int age, string name, string id){
    address P = new Node;
    if (P != Nil){
        P->data.age = age;
        P->data.name = name;
        P->data.id = id;
        P->next = Nil;
    }
    return P;
};
// Function to deallocate a node
void dealokasi(address &P){
    P->next = Nil;
    delete P;
};
// Function to print the elements of the linked list
void printList(LinkedList L){
    address P = L.first;
    while (P != Nil){
        cout << "Name: \t" << P->data.name << ", ID: \t" << P->data.id << ", Age: " << P->data.age << endl;
        P = P->next;
    }
};
// Function to insert a node at the beginning of the linked list
void insertFirst(LinkedList &L, address P)
{
    if (isEmpty(L)){
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
};
// Function to insert a node after a given node in the linked list
void insertAfter(LinkedList &L, address Prev, address P)
{
    if (Prev != Nil){
        P->next = Prev->next;
        Prev->next = P;
    }
};
// Function to insert a node at the end of the linked list
void insertLast(LinkedList &L, address P)
{
    if (isEmpty(L)){
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != Nil){
            Q = Q->next;
        }
        Q->next = P;
    }
};

// Function to delete the first node of the linked list
void delfirst(LinkedList &L){
    if (isEmpty(L)){
        cout << "List is empty, cannot delete." << endl;
    } else {
        address P = L.first;
        L.first = P->next;
        dealokasi(P);
    }
};
// Function to delete a node after a given node in the linked list
void delAfter(LinkedList &L, address Prev, address P){
    if (isEmpty(L)){
        cout << "List is empty, cannot delete." << endl;
    } else {
        if(Prev != Nil && Prev->next != Nil){
            P = Prev->next;
            Prev->next = P->next;
            P->next = Nil;
            dealokasi(P);
        }else{
            cout << "Previous node is not valid, cannot delete." << endl;
        }
    }
};
// Function to delete the last node of the linked list
void delLast(LinkedList &L){
    if (isEmpty(L)){
        cout << "List is empty, cannot delete." << endl;
    } else {
        address P = L.first;
        address Q = Nil;
        while (P->next != Nil){
            Q = P;
            P = P->next;
        }
        if (Q != Nil){
            Q->next = Nil;
        } else {
            L.first = Nil;
        }
        dealokasi(P);
    }
};
// Function to count the number of nodes in the linked list
int nbList(LinkedList L){
    int count = 0;
    address P = L.first;
    while (P != Nil){
        count++;
        P = P->next;
    }
    return count;
};
// Function to delete all nodes in the linked list
void delList(LinkedList &L){
    while (!isEmpty(L)){
        delfirst(L);
    }
};

```
Implementasi.

## Unguided

### 1. Singlylist.h
```h
#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#define Nil NULL
using namespace std;

// Definisi Tipe
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
```
penjelasan unguided 1
Ini addalha header yang mendeclarasi structur data singly linked list dan operasinya.


### 2. Singlist.cpp

```cpp
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
```
Implementasi.

### 3. Main.cpp
```C++
#include "Singlylist.h"
#include <iostream>

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;

    CreateList(L);

    P1 = alokasi(2);
    P2 = alokasi(0);
    P3 = alokasi(8);
    P4 = alokasi(12);
    P5 = alokasi(9);

    insertFirst(L, P1);
    insertFirst(L, P2);
    insertFirst(L, P3);
    insertFirst(L, P4);
    insertFirst(L, P5);

    cout << "Isi List: ";
    printInfo(L);

    return 0;
}
```

### Output :

##### Output 1

![Screenshot Output Unguided 1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul4/Output/Soal1.png)


penjelasan unguided 3
Main yang menjadi pusat input dan output.

## Kesimpulan
Minggu ini saya mempelajari cara membangun singly linked list dan bagaimana sebuah program dapat membuat operasi-operasi singly linked list untuk menggunakan singly linked list tersebut.

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
