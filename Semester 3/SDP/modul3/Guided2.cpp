#include <iostream>
using namespace std;
int main(){

    int numberEightSeven, y;
    int *pointerToX;

    numberEightSeven = 87;
    pointerToX = &numberEightSeven;
    y = *pointerToX;
    
    cout << "Alamat numberEightSeven= " << &numberEightSeven << endl;
    cout << "Isi pointerToX= " << pointerToX << endl;
    cout << "Isi X= " << numberEightSeven << endl;
    cout << "Nilai yang ditunjuk px= " << *pointerToX << endl;
    cout << "Nilai y= " << y << endl;

    return 0;
}