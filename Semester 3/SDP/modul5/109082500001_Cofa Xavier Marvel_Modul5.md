# <h1 align="center">Laporan Praktikum Modul 5 - SINGLY LINKED LIST (BAGIAN KEDUA)</h1>

<p align="center">Cofa Xavier Marvel - 109082500001</p>

## Dasar Teori
Pencarian adalah proses yang mengunjungi setiap node dan berhenti setelah node yang diinginkan ditemukan. Dengan melakukan operasi pencarian, operasi seperti penyisipan setelah, penghapusan setelah, dan pembaruan menjadi lebih mudah.

## Guided

### 1. Header

```h
#ifndef LINKEDLISTT_H
#define LINKEDLISTT_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef struct Node *address;

struct student {
    int age;
    string name, id;
};

struct Node {
    student student;
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

void updateFirst(LinkedList &list);
void updateLast(LinkedList &list);
void updateAfter(LinkedList list ,address &prev);
void updateByNim(LinkedList &list, string nim);

address FindNodeByData(LinkedList list, string student);
void FindNodeByAddress(LinkedList list, address node);
void FindNodeByRanged(LinkedList list, int nilaiAwal, int nilaiAkhir);

#endif
```
Ini adalah file header C++ yang mendefinisikan struktur data student beserta deklarasi fungsi yang digunakan untuk memodifikasi, menampilkan, dan memvalidasi datanya di seluruh proyek.

### 2. Implentasi

```C++
#include "List2.h"
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
// Function to allocate a new node with the given student student
address alokasi(int age, string name, string id){
    address P = new Node;
    if (P != Nil){
        P->student.age = age;
        P->student.name = name;
        P->student.id = id;
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
        cout << "Name: \t" << P->student.name << ", ID: \t" << P->student.id << ", Age: " << P->student.age << endl;
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

// prosedur-prosedur untuk melakukan update student node
void updateFirst(LinkedList &list)
{
		if (isEmpty(list) == true)
    {
        cout << "List kosong!" << endl;
    }
    else {
    student newData;
    cout << "Masukan nama baru : ";
    cin >> newData.name;
    cout << "Masukan nim baru : ";
    cin >> newData.id;
    cout << "Masukan umur baru : ";
    cin >> newData.age;
    list.first->student = newData;
    }
}

void updateLast(LinkedList &list)
{
		if (isEmpty(list) == true)
    {
        cout << "List kosong!" << endl;
    }
    else {
    student newData;
    cout << "Masukan nama baru : ";
    cin >> newData.name;
    cout << "Masukan nim baru : ";
    cin >> newData.id;
    cout << "Masukan umur baru : ";
    cin >> newData.age;

    address nodeBantu = list.first;
    while (nodeBantu->next != Nil)
    {
        nodeBantu = nodeBantu->next;
    }

    nodeBantu->student = newData;
    }
}

void updateAfter(LinkedList list, address &prev)
{
    student newData;
    cout << "Masukan nama baru : ";
    cin >> newData.name;
    cout << "Masukan nim baru : ";
    cin >> newData.id;
    cout << "Masukan umur baru : ";
    cin >> newData.age;

        prev->next->student = newData;
}

void updateByNim(LinkedList &list, string nim)
{
    if (!isEmpty(list))
    {
        address nodeBantu = FindNodeByData(list, nim);

        if (nodeBantu != Nil)
        {
            student newData;
            cout << "Masukan nama baru : ";
            cin >> newData.name;
            cout << "Masukan nim baru : ";
            cin >> newData.id;
            cout << "Masukan umur baru : ";
            cin >> newData.age;
            

            nodeBantu->student = newData;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}


address FindNodeByData(LinkedList List, string student)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan node yang sesuai dengan nama atau nim yang dicari */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        while (nodeBantu != Nil)
        {
            posisi++;
            if (nodeBantu->student.id == student || nodeBantu->student.name == student )
            {
                cout << "Data " << student << " ditemukan pada posisi ke-" << posisi << "!" << endl;
                cout << "Nama : " << nodeBantu->student.name << ", NIM : " << nodeBantu->student.id << ", Usia : " << nodeBantu->student.age << endl;
                found = true;
                return nodeBantu;
            }
            nodeBantu = nodeBantu -> next;
        }
        if (found == false)
        {
            cout << "Node dengan student " << student << " tidak ditemukan!" << endl;
        }
    }
    cout << endl;
    return Nil;
}

void FindNodeByAddress(LinkedList List, address node)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan node yang sesuai dengan alamat yang dicari */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        while (nodeBantu != Nil)
        {
            posisi++;
            if (nodeBantu == node)
            {
                cout << "Node ditemukan pada posisi ke-" << posisi << "!" << endl;
                cout << "Alamat Node : " << nodeBantu << endl;
                cout << "Nama : " << nodeBantu->student.name << ", NIM : " << nodeBantu->student.id << ", Usia : " << nodeBantu->student.age << endl;
                found = true;
                break;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Node dengan alamat " << node << " tidak ditemukan dalam list!" << endl;
        }
    }
    cout << endl;
}

void FindNodeByRange(LinkedList List, int nilaiAwal, int nilaiAkhir)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan semua node yang memiliki umur di dalam rentang nilaiAwal sampai nilaiAkhir */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        cout << "--- Data diatas usia " << nilaiAwal << " dan dibawah " << nilaiAkhir << " ---" << endl;
        while (nodeBantu != Nil)
        {
            posisi++;
            int umur = nodeBantu->student.age;
            if (umur >= nilaiAwal && umur <= nilaiAwal)
            {
                cout << "Data ditemukan pada posisi ke-" << posisi << " :" << endl;
                cout << "Nama : " << nodeBantu->student.name << ", NIM : " << nodeBantu->student.id << ", Usia : " << nodeBantu->student.age << endl;
                found = true;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Tidak ada student node dalam range tersebut!" << endl;
        }
    }
}
```
Implementasi.
### 3. Main.cpp
```C++
#include "List2.h"
#include <iostream>
using namespace std;

int main(){
	LinkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    nodeA = alokasi(20,"James" ,"2311102151");
    nodeB = alokasi(21,"Jesse","2211110014");
    nodeC = alokasi(20,"Jeremy","2311110029");
    nodeD = alokasi(21,"jhon","2211102173");
    nodeE = alokasi(21,"Jessica","2311102133");

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeA, nodeC);
    insertAfter(List, nodeC, nodeD);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    updateFirst(List);
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE FIRST ---" << endl;
    printList(List);

    updateLast(List);
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE LAST ---" << endl;
    printList(List);

    updateAfter(List, nodeC);
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE AFTER NODE C ---" << endl;
    printList(List);

    updateByNim(List,"2211110014");
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE NIM 2211110014 ---" << endl;
    printList(List); 

    return 0;
}
```
Main yang pangil fungsi untuk membuat, nampil, dan update list


## Unguided

### 1. Singlylist.h
```h
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
void printInfo(List L);
void insertFirst(List &L, address P);
address findElm(List L, infotype x);
infotype giveSum(List L);

#endif
```
penjelasan unguided 1
Ini adalah header yang mendeclarasi structur data singly linked list dan operasinya.
Pada bagian atas dan bawah adalah include guards yang untuk menghatikan kompieler maka tidak di load lebih dari satu kail.


### 2. Singlist.cpp

```cpp
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
```
Implementasi.

### 3. Main.cpp
```C++
#include "singlylist.h"
#include <iostream>

using namespace std;

int main()
{

List L;
address P1, P2, P3, P4, P5 = Nil;
    CreateList(L);

    P1 = alokasi(2);

    insertFirst(L,P1);

    P2 = alokasi(0);

    insertFirst(L,P2);

    P3 = alokasi(8);

    insertFirst(L,P3);

    P4 = alokasi(12);

    insertFirst(L,P4);

    P5 = alokasi(9);

    insertFirst(L,P5);
    
    printInfo(L);

    findElm(L,8);

    giveSum(L);

return 0;
}
```
Main yang pangil fungsi untuk membuat, nampil info, cari suatu elemen dalam list dan jumlah semua elemen dalam list.
### Output :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul5/Output/Soal2.png)

##### Output 2

![Screenshot Output Unguided 3_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul5/Output/Soal3.png)

##### Output 3

![Screenshot Output Unguided 3_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul5/Output/Soal4.png)


penjelasan

## Kesimpulan
Yang saya lakukan adalah membuat daftar singly linked list dengan operasi basic, kemudian membuat dua fungsi baru yaitu findElm dan giveSum. findElm adalah algoritma pencarian yang menelusuri daftar berantai tunggal dengan kompleksitas waktu O(n), dan giveSum hanya menggunakan algoritma iteratif findElm untuk menelusuri daftar, menjumlahkan semua informasi yang ditunjuk oleh node bantuan.
## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
