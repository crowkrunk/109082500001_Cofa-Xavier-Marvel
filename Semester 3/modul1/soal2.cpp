#include <iostream>
using namespace std;

int main(){
    string satuan[] = {"","Satu","Dua","Tiga","Empat","Lima","Enam","Tujuh","Delapan","Sembilan"};
    int n;
    cin >> n;

    if (n < 10){
        cout << satuan[n];
    } else if (n == 10){
        cout << "Sepuluh";
    } else if (n == 11){
        cout << "Sebelas";
    } else if (n < 20){
        cout << satuan[n % 10] << " belas";
    } else if (n < 100){
        cout << satuan[n / 10] << " puluh";
        if (n % 10 != 0)
            cout << " " << satuan[n % 10];
    }else if (n == 100){
        cout << "Seratus";
    }
    return 0;
}