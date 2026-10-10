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