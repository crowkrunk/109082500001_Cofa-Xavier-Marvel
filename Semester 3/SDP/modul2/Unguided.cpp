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