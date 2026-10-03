# <h1 align="center">Laporan Praktikum Modul 2 - CODEBLOCKs IDE & Pengenalan Bahas C++ (Bagian Dua)</h1>

<p align="center">Cofa Xavier Marvel - 109082500001</p>

## Dasar Teori
Teori inti dari sesi praktik ini mencakup penyimpanan variabel ke dalam array, serta konsep pointer, fungsi, prosedur, dan cara pemanggilan parameter.

## Guided

### 1. 2D array.

```C++
#include <iostream>
#define MAX 5
using namespace std; 

int main(){
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] =
    {   {0,2,2,0,0} ,
        {0,1,1,1,0} ,
        {0,3,3,3,0} ,
        {4,4,0,0,4} ,
        {5,0,0,0,5}
    };

    for (int i = 0;i < MAX; i++) {
        cout <<"Masukan nilai ke-"<<i+1<<endl;
        cin >> nilai[i];
    }
    
    for (int i = 0; i < MAX; i++) {
        cout << "nilai k-"<< i+1<< "="<<nilai[i]<< endl;
    }

        for(int i = 0; i < MAX; i++){
            for(int j = 0; j < MAX; j++){
                cout << nilai_tahun[i][j];
            cout << "\n";
    }
    }

}

```
Program yang mendeklarasikan array berukuran 5 serta mendeklarasikan dan menginisialisasi array dua dimensi berukuran 5x5; menggunakan perulangan *for* untuk memasukkan data ke dalam array berukuran 5, lalu menampilkan array tersebut beserta indeksnya serta menampilkan array dua dimensi tersebut.

### 2. Pointer and address

```C++
#include <iostream>
using namespace std;
int main(){

    int x, y;
    int *pointerToX;

    x = 87;
    pointerToX = &x;
    y = *pointerToX;
    
    cout << "Alamat x= " << &x << endl;
    cout << "Isi pointerToX= " << pointerToX << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *pointerToX << endl;
    cout << "Nilai y= " << y << endl;

    return 0;
}
```
Demonstrasi mengenai *pointer* dan alamat memori, yang menyoroti perbedaan antara alamat, *pointer*, dan nilai yang tersimpan di dalamnya.


### 3. Max

```C++
#include <iostream>
using namespace std;

int maks3(int a, int b, int c);

int main(){
    int x,y,z;
    cout<<"masukkan nilai bilangan ke-1 =";
    cin>>x;
    cout<<"masukkan nilai bilangan ke-2 =";
    cin>>y;
    cout<<"masukkan nilai bilangan ke-3 =";
    cin>>z;
    cout<<"nilai maksimumnya adalah ="
    <<maks3(x,y,z);
    return 0;
}

int maks3(int a, int b, int c){
    int temp_max = a;
    
    if(b>temp_max)
    temp_max=b;
    if(c>temp_max)
    temp_max=c;
    
    return (temp_max);
}
```
Program yang menerima input berupa array berisi 3 elemen, lalu mencari dan mencetak angka terbesarnya.


### 4. Fungsi

```C++
#include <iostream>
using namespace std;


void tulis(int x);

int main(){
    int jum;

    cout <<" jumlah baris kata=";
    cin >> jum;

    tulis(jum);

    return 0;
}

void tulis(int x){
    for (int i=0;i<x;i++){
        cout<<"baris ke-"<<i+1<<endl;
        }
}
```

Program ini meminta pengguna memasukkan jumlah baris, menyimpan input tersebut dalam variabel, lalu memanggil fungsi. Program menggunakan perulangan for yang berjalan sebanyak x kali. Pada setiap iterasi, program mencetak "baris ke-" diikuti oleh nomor baris saat ini (i + 1).

### 5. Pointer

```C++
#include <iostream>
using namespace std;

void tukar(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout << "[Inside Function] x = " << x << " y = " << y << endl;
}

void tukarPointer(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 4, b = 6;
    
    cout << "--- Pass by Value ---" << endl;
    tukar(a, b);
    cout << "[Main] a = " << a << " b = " << b << endl; 

    cout << "\n--- Pass by Pointer ---" << endl;
    tukarPointer(&a, &b); 
    cout << "[Main] a = " << a << " b = " << b << endl; 

    cout << "\n--- Pass by Reference ---" << endl;
    tukarReference(a, b); 
    cout << "[Main] a = " << a << " b = " << b << endl; 

    return 0;
}

```
Program ini mendemonstrasikan perbedaan antara penggunaan pointer dan referensi.



## Unguided

### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3.
```C++
#include <iostream>
using namespace std;

const int MAX = 3;

void printMatrix(int matrix[][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void inputMatrix(int A[][MAX]){
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cin >> A[i][j];
        }
    }
}

void addMatrices(int A[][MAX], int B[][MAX], int result[][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[][MAX], int B[][MAX], int result[][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[][MAX], int B[][MAX], int result[][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            result[i][j] = 0;
            for (int k = 0; k < MAX; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX];
    int addResult[MAX][MAX], subResult[MAX][MAX], mulResult[MAX][MAX];
    char choice;

    cout << "Masukkan elemen matriks A (3x3):" << endl;
    inputMatrix(A);

    cin >> choice;

    cout << "Masukkan elemen matriks B (3x3):" << endl;
    inputMatrix(B);

    switch (choice) {
        case '+':
            addMatrices(A, B, addResult);
            cout << "\nHasil Penjumlahan (A + B):" << endl;
            printMatrix(addResult);
            break;
        case '-':
            subtractMatrices(A, B, subResult);
            cout << "\nHasil Pengurangan (A - B):" << endl;
            printMatrix(subResult);
            break;
        case '*':
            multiplyMatrices(A, B, mulResult);
            cout << "\nHasil Perkalian (A x B):" << endl;
            printMatrix(mulResult);
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 1;
    }

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 1

### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel.

```C++
#include <iostream>
using namespace std;

int main(){
#include <iostream>
using namespace std;

void swapThreePointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void swapThreeReference(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int x = 1, y = 2, z = 3;
    cout << "POINTER" << endl;
    cout << "Sebelum : x=" << x << ", y=" << "y=" << y << ", z=" << z << endl;
    swapThreePointer(&x, &y, &z);
    cout << "Sesudah : x=" << x << ", y=" << y << ", z=" << z << endl;
    
    int p = 10, q = 20, r = 30;
    cout << "\nREFERENCE" << endl;
    cout << "Sebelum : p=" << p << ", q=" << q << ", r=" << r << endl;
    swapThreeReference(p, q, r);
    cout << "Sesudah : p=" << p << ", q=" << q << ", r=" << r << endl;

    return 0;
}
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

##### Output 2

![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

const int SIZE = 10;

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

void calcAverage(int arr[], int n, float *avg) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    *avg = (float)sum / n;
}

void displayArray(int arr[], int n) {
    cout << "Array contents: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    int arrA[SIZE] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    float average = 0.0f;
    int choice;

    do {
        cout << "\n--- Menu Program Array ---" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. cari nilai maksimum" << endl;
        cout << "3. cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata - rata" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arrA, SIZE);
                break;
            case 2:
                cout << "Maximum value = " << findMax(arrA, SIZE) << endl;
                break;
            case 3:
                cout << "Minimum value = " << findMin(arrA, SIZE) << endl;
                break;
            case 4:
                calcAverage(arrA, SIZE, &average);   // pass by pointer
                cout << "Average value = " << average << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)


##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 3

## Kesimpulan

Operasi matriks menggunakan perulangan untuk penjumlahan atau pengurangan elemen demi elemen serta perulangan bersarang untuk perkalian, dengan hasil yang disimpan dalam matriks ketiga. Pertukaran variabel memanfaatkan *pointer* (*dereferencing*) atau referensi (*ampersand*) untuk memodifikasi nilai asli secara langsung. Fungsi-fungsi *array* melakukan iterasi untuk menemukan nilai minimum (1) dan maksimum (77), sedangkan perhitungan rata-rata (17) memerlukan prosedur *void* dengan metode *pass-by-reference* karena prosedur tersebut tidak dapat mengembalikan nilai. Menu *switch-case* di dalam fungsi main()memungkinkan pengguna untuk menampilkan *array*, mencari nilai maksimum/minimum, atau menghitung rata-rata, sehingga kode tetap bersifat modular dan mudah dikembangkan.

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...