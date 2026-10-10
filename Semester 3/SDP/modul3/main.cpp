#include <iostream>
#include "buku.h"

using namespace std;

int main(){

    buku novel;
    string judul, penulis;
    int halaman;

    cout << "Judul buku : ";
    cin >> judul;
    cout << "Halaman buku : ";
    cin >> halaman;
    cout << "Penulis buku : ";
    cin >> penulis;

    editIsi(judul,halaman,penulis,novel);
    tampilkanIsiBuku(novel);
    cout << "Penulis itu " << checkPenulis(novel);

    return 0;
}