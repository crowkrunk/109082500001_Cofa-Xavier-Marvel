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