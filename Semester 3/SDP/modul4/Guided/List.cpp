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

void updateAfter(address &prev)
{
    student newData;
    cout << "Masukan nama baru : ";
    cin >> newData.name;
    cout << "Masukan nim baru : ";
    cin >> newData.id;
    cout << "Masukan umur baru : ";
    cin >> newData.age;

    prev->____->____ = ____;
}

void updateByNim(linkedlist &list, string nim)
{
    if (!isEmpty(list))
    {
        address _____ = findNodeByData(list, nim);

        if (_____ != Nil)
        {
            _____ newData;
            cout << "Masukan nama baru : ";
            cin >> ______.____;
            cout << "Masukan nim baru : ";
            cin >> ____.____;
            cout << "Masukan umur baru : ";
            cin >> ____.____;

            _____->_____ = newData;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}


void FindNodeByData(linkedlist List, string student)
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
                break;
            }
            nodeBantu = nodeBantu -> next;
        }
        if (found == false)
        {
            cout << "Node dengan student " << student << " tidak ditemukan!" << endl;
        }
    }
    cout << endl;
}

void FindNodeByAddress(linkedlist List, address node)
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