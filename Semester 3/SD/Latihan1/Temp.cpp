#include "Temp.h"
#include <iostream>
using namespace std;

address alokasi(string Nama,
                string NIM,
                string Nilai)
{
if(P != NULL ){
    address P = new node;
        P->Nama = Nama;
        P->NIM = NIM;
        P->Nilai = Nilai;
        P->Next = NULL;
    }
return P;
}

void inputNode(L &l){
    string Nama;
    string NIM;
    string Nilai;
    address P;
    while(true){
        cin >> Nama;
        cin >> NIM;
        if Nama == '' || NIM == ''{
            cout << "berhenti" << endl;
            break;
        }
        cin >> Nilai;
        P = alokasi(Nama,NIM,Nilai);
        if (l.first == NULL){
            l.first = P;
        }else{
            P->Next = l.first;
            l.first = P;
        }
    }
}

Bool isPass(address P){
    return P->Nilai == "A" || P->Nilai == "AB" || P->Nilai == "B" || P->Nilai == "BC" || P->Nilai == "C";
};

void hitungLulus(L l){ 
    address P = l.first;
    int count;
    if (P != NULL){
        if isPass(P){
            count++
        }
        P = P->Next
    }
    cout << "Jumlah Mahasiswa Lulus:" << count << endl;
};

