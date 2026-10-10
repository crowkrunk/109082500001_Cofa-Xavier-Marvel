#include "pelajaran.h"

pelajaran inputPelajaran(string namaMapel, string codeMapel)
{
    pelajaran pelajaran;
    pelajaran.namaMapel = namaMapel;
    pelajaran.codeMapel = codeMapel;
    return pelajaran;
}

void tampilkanPelajaran(pelajaran pelajaran)
{
    cout << "Nama Pelajaran : " << pelajaran.namaMapel << endl;
    cout << "Kode Pelajaran : " << pelajaran.codeMapel << endl;
}