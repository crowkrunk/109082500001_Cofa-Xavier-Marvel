#ifndef TEMP_H
#define TEMP_H

#include <iostream>
using namespace std;

typedef struct node *address;

struct node {
    string Nama;
    string NIM;
    string Nilai;
    address Next;
};

struct list{
    address first;
};

typedef list L;

address alokasi(string Nama,
                string NIM,
                string Nilai);
void inputNode(L &l);
Bool isPass(address P);
void hitungLulus(L l);
#endif