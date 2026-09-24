# <h1 align="center">Laporan Praktikum Modul 1 - CODEBLOCKs IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Cofa Xavier Marvel - 109082500001</p>

## Dasar Teori
Karena ini merupakan laporan praktikum pertama, terdapat kekurangan teori yang mengaitkan materi dengan data terstruktur; sebaliknya, sebagian besar persoalan lebih menyerupai pengenalan ulang.

## A. Apa saja yang dibahas lagi.
#1.struktur program.
#2.tipe data.
#3.variabel.
#4.konstanta.
#5.operator.
#6.operasi I/O.
#7.struktur kontrol percabangan (if dan switch) serta perulangan.
#8.ipe data terstruktur (struct).
#9.pembuatan fungsi dasar.
## Guided

### 1. ...

```C++
source code guided 1
```

penjelasan singkat guided 1

### 2. ...

```C++
source code guided 2
```

penjelasan singkat guided 2

### 3. ...

```C++
source code guided 3
```

penjelasan singkat guided 3

## Unguided

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.
```C++
#include <iostream>
using namespace std; 


int main(){
float Input1;
float Input2;
cin >> Input1;
cin >> Input2;
cout << Input1 + Input2 << endl;
cout << Input1 - Input2 << endl;
cout << Input1 * Input2 << endl;
cout << Input1 / Input2 << endl;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/modul1/output/Soal1.png)

##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/modul1/output/Soal1_2.png)

penjelasan unguided 1

### 2. (Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100)

```C++
#include <iostream>
using namespace std;

int main(){
    string satuan[] = {"","Satu","Dua","Tiga","Empat","Lima","Enam","Tujuh","Delapan","Sembilan"};
    int n;
    cin >> n;

    if (n < 10){
        cout << satuan[n];
    } else if (n == 10){
        cout << "Sepuluh";
    } else if (n == 11){
        cout << "Sebelas";
    } else if (n < 20){
        cout << satuan[n % 10] << " belas";
    } else if (n < 100){
        cout << satuan[n / 10] << " puluh";
        if (n % 10 != 0)
            cout << " " << satuan[n % 10];
    }else if (n == 100){
        cout << "Seratus";
    }
    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/modul1/output/Soal2.png)

##### Output 2

![Screenshot Output Unguided 2_2](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/modul1/output/Soal2_2.png)

penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;
     cout << "output: "<< endl;
    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < (n - i) * 2; s++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";
        for (int j = 1; j <= i; j++) {
            cout << j;
            if (j < i) cout << " ";
        }
        cout << endl;
    }
    for (int s = 0; s < n * 2; s++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/modul1/output/Soal3.png)


##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/Semester%203/modul1/output/Soal3_2.png)

penjelasan unguided 3

## Kesimpulan

...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
