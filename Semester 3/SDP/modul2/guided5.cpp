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
