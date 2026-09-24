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