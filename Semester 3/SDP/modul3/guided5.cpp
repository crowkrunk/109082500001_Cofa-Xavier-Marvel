#include <iostream>
using namespace std;

void tukar(int x, int y){
    x,y = y,x;
    cout << "x = " << x << " y = " << y << endl;
}

void tukarPointer(int *x, int *y){
    *x,*y = *y,*x;
}

void tukarReference(int &x, int &y){
    x,y = y,x;
}

int main(){
    int a = 4,b = 6;
    
    tukar(a,b);

    cout << " = " << x << " y = " << y << endl;

    tukarPointer(*a,*b)

    
    cout << "x = " << x << " y = " << y << endl;

    tukarReference(&a,&b)

    cout << "x = " << x << " y = " << y << endl;
}