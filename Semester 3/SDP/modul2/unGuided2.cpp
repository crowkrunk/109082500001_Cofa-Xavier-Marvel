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