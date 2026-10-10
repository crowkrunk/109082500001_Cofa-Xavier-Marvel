#include <iostream>
#include "pelajaran.h"

using namespace std;

int main()
{
    pelajaran pelajaran;
    string namaMapel, codeMapel;

    namaMapel = "Struktur Data";
    codeMapel = "STD";

    pelajaran = inputPelajaran(namaMapel, codeMapel);
    tampilkanPelajaran(pelajaran);

    return 0;
}