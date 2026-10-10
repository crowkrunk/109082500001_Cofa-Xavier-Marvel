#ifndef PELAJARAN_H
#define PELAJARAN_H
#include <iostream>

using namespace std;

struct pelajaran
{
    string namaMapel;
    string codeMapel;
};

pelajaran inputPelajaran(string namaMapel, string codeMapel);
void tampilkanPelajaran(pelajaran pelajaran);
#endif