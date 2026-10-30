#include <iostream>
#include "Doublylist.h"
using namespace std;

int main() {
    List L;
    address P, hapus;
    infotype x;

    CreateList(L);

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan nomor polisi: ";
        cin >> x.nopol;

        // Cek duplikat
        bool ada = false;
        address Q = L.first;
        while (Q != Nil) {
            if (Q->info.nopol == x.nopol) { ada = true; break; }
            Q = Q->next;
        }
        if (ada) {
            cout << "nomor polisi sudah terdaftar" << endl;
            i--;
            continue;
        }

        cout << "Masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "Masukkan tahun kendaraan: ";
        cin >> x.thnBuat;

        P = alokasi(x);
        insertLast(L, P);
    }
    
    cout << "\nData LIST 1" << endl;
    printInfo(L);

    infotype cari;
    cari.nopol = "D001";
    address hasil = findElm(L, cari);
    cout << "\nPencarian nomor polisi D001" << endl;
    if (hasil != Nil) {
        cout << "Ditemukan -> no polisi: " << hasil->info.nopol
             << ", warna: " << hasil->info.warna
             << ", tahun: " << hasil->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    address target = findElm(L, cari);
    cari.nopol = "D003";
    target = findElm(L, cari);

    if (target != Nil) {
        if (target == L.first) {
            deleteFirst(L, hapus);
        } else if (target == L.last) {
            deleteLast(L, hapus);
        } else {
            deleteAfter(target->prev, hapus);
        }
        cout << "\nData D003 berhasil dihapus" << endl;
    } else {
        cout << "\nData D003 tidak ditemukan" << endl;
    }

    cout << "\nData LIST setelah penghapusan" << endl;
    printInfo(L);

    return 0;
}