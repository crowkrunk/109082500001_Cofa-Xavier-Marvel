# <h1 align="center">Laporan Praktikum Modul 3 - ABSTRACT DATA TYPE (ADT)</h1>

<p align="center">Cofa Xavier Marvel - 109082500001</p>

## Dasar Teori
ADT adalah penjumlahan type dan sekumpulan primitif terhadap type tersebut. ADT yang lengkap juga menyertakan invarian dan aksioma. ADT bersifat statik.

## Guided

### 1. Header

```h
#ifndef BUKU_H
#define BUKU_H
#include <iostream>

using namespace std;

struct buku
{
    string judul;
    int halaman;
    string penulis;
};

void editIsi(string judul, int halaman, string penulis, buku &buku);
void tampilkanIsiBuku(buku buku);
bool checkPenulis(buku buku);

#endif
```
Ini adalah file header C++ yang mendefinisikan struktur data buku yang berisi judul, halaman, dan penulis, beserta deklarasi fungsi yang digunakan untuk memodifikasi, menampilkan, dan memvalidasi datanya di seluruh proyek.

### 2. Implentasi

```C++
#include "buku.h"

void editIsi(string judul, int halaman, string penulis, buku &buku)
{
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
};

void tampilkanIsiBuku(buku buku)
{
    cout << "Judul Buku : " << buku.judul << endl;
    cout << "Halaman Buku : " << buku.halaman << endl;
    cout << "Penulis Buku : " << buku.penulis << endl;
}

bool checkPenulis(buku buku)
{
    return buku.penulis == "";
};
```
Ini adalah implementasi dari buku.h, yang menyediakan logika fungsi untuk memodifikasi atribut buku, mencetak detailnya ke konsol, dan mengembalikan nilai 1 jika kolom nama penulis kosong.

### 3. Main

```C++
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
```
Main berfungsi sebagai titik masuk program, meminta pengguna untuk memasukkan detail buku melalui input konsol, menyimpan data tersebut ke dalam instance struct buku, dan menampilkan informasi yang tersimpan serta hasil validasi penulis kosong.

## Unguided

### 1. Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3*uts+0.4*uas+0.3*tugas.
```C++
#include <iostream>
using namespace std;

const int MAX_STUDENTS = 10;

struct Student {
    string name;
    string Nim;
    double uts;
    double uas;
    double Tugas;
    double finalGrade;
};

double calculateFinalGrade(double uts, double uas, double Tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * Tugas;
}

void displayStudents(const Student students[], int n) {
    cout << "------------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Name\t: "
             << students[i].name << "\n"
             << "NIM\t: "
             << students[i].Nim << "\n"
             << "UTS\t: "
             << students[i].uts << "\n"
             << "UAS\t: "
             << students[i].uas << "\n"
             << "Tugas\t: "
             << students[i].Tugas << "\n"
             << "Nilai Akhir\t: "
             << students[i].finalGrade << "\n";
        cout << "------------------------------------------------------------------------\n";
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int n = 0;
    char again;

    do {
        if (n >= MAX_STUDENTS) {
            cout << "\nMaximum of " << MAX_STUDENTS << " students reached.\n";
            break;
        }

        cout << "\n--- Input data for student #" << (n + 1) << " ---\n";
        cout << "Name\t: ";
        getline(cin, students[n].name);

        cout << "NIM\t: ";
        getline(cin, students[n].Nim);

        cout << "UTS\t: ";
        cin >> students[n].uts;
        cout << "UAS\t: ";
        cin >> students[n].uas;
        cout << "Tugas\t: ";
        cin >> students[n].Tugas;

        students[n].finalGrade = calculateFinalGrade(students[n].uts, students[n].uas, students[n].Tugas);
        n++;

        cout << "Add another student? (y/n): ";
        cin >> again;
        cin.ignore();
    } while (again == 'y' || again == 'Y');

    displayStudents(students, n);

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul3/Output/Soal1.png)

##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul3/Output/Soal1_2.png)

penjelasan unguided 1
Program ini mengumpulkan nama, ID, dan tiga nilai ujian (UTS, UAS, Tugas) untuk maksimal 10 siswa dan menyimpannya dalam array struktur, menghitung nilai akhir mereka menggunakan rata-rata tertimbang (30% UTS, 40% UAS, 30% Tugas), dan kemudian menampilkan semua catatan siswa yang dimasukkan beserta nilai akhir yang telah dihitung.


### 2. Pembuatan pelajaran.h,pelajaraan.cpp, dan main.cpp

```h
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
```
```C++
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
```
```C++
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
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul3/Output/Soal2.png)

penjelasan unguided 2
Program ini mendemonstrasikan penggunaan struct dasar dengan mendefinisikan tipe pelajaran, menggunakan fungsi untuk mengisinya dengan data, dan fungsi lain untuk menampilkan nama dan kode mata pelajaran.


### 3. Buatlah program dengan ketentuan :
- 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer
- fungsi/prosedur yang menampilkan isi sebuah array integer 2D
- fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu
- fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah
pointer

```C++
#include <iostream>
using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarElemenPadaPosisi(int arrA[3][3], int arrB[3][3], int baris, int kolom) {
    int temp = arrA[baris][kolom];
    arrA[baris][kolom] = arrB[baris][kolom];
    arrB[baris][kolom] = temp;
}

void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int x = 100;
    int y = 200;
    int *ptrX = &x;
    int *ptrY = &y;

    tampilkanArray(A);
    cout << "\n================================================" << endl;
    tampilkanArray(B);
    cout << "\n================================================" << endl;
    tukarElemenPadaPosisi(A, B, 0, 1);
    cout << "\n tukarElemenPadaPosisi(A, B, 0, 1)" << endl;
    cout << "\n================================================" << endl;
    tampilkanArray(A);
    cout << "\n================================================" << endl;
    tampilkanArray(B);
    cout << "\n================================================" << endl;
    cout << "ptrX = " << *ptrX << ", ptrY = " << *ptrY << endl;
    cout << "\n================================================" << endl;
    tukarPointer(ptrX, ptrY);
        cout << "\ntukarPointer(ptrX, ptrY)" << endl;
    cout << "\n================================================" << endl;
    cout << "ptrX = " << *ptrX << ", ptrY = " << *ptrY << endl;

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/SDP/modul3/Output/Soal3.png)


penjelasan unguided 3
Program ini menjelaskan cara memanipulasi data dengan menampilkan dua matriks 3x3, menukar elemen tertentu di antara keduanya dengan `tukarElemenPadaPosisi`, dan menggunakan pointer untuk menukar nilai dua variabel integer dengan `tukarPointer`.

## Kesimpulan
Minggu ini saya mempelajari cara membangun ADT dan bagaimana sebuah program dapat menggunakan pointer dan referensi untuk menggunakan ADT tersebut.

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
