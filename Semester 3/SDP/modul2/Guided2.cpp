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