#include <iostream>
#include <string>
using namespace std;


struct dataAntrean{
    int halaman;
    string nama;
};

typedef struct antrean *address;

struct antrean{
    dataAntrean data;
    address next;
    address prev;
};

struct doublyLinkedList{
    address first;
    address last;
};

bool isEmpty(doublyLinkedList l){
    return l.first == NULL && l.last == NULL;
};

void printSisa(doublyLinkedList l){
    int count = 2;
    address P = l.last->prev;
    while (P != NULL)
    {
        cout << "Prioritas Print:"<< count<< endl<< "Nama doc:" << P->data.nama<< endl << "Jumlah halaman:" << P->data.halaman << endl << endl;
        P = P->prev;
        count++;
    }
}
void printProcess(doublyLinkedList l){
    address P = l.last;
    cout << "Prioritas Print:"<< 1 << endl<< "Nama doc:" << P->data.nama<< endl << "Jumlah halaman:" << P->data.halaman << endl;
    cout << "SEDANG DIPROSES" << endl << endl;
}

address allocasi(string nama, int halaman){
    address antreanBaru = new antrean;
    antreanBaru->data.nama = nama;
    antreanBaru->data.halaman = halaman;
    antreanBaru->next = NULL;
    antreanBaru->prev = NULL;
    return antreanBaru;
};

void process(doublyLinkedList &l, address antreandiProcess){
    antreandiProcess->data.nama = "";
    antreandiProcess->data.halaman = 0;
    antreandiProcess->next = NULL;
    antreandiProcess->prev = NULL;
};

void insertFirst(doublyLinkedList &l, address &antreanBaru){
    if (isEmpty(l)){
        antreanBaru->next = NULL;
        antreanBaru->prev = NULL;
        l.first = antreanBaru;
        l.last = antreanBaru;
    } else {
    antreanBaru->next = l.first;
    antreanBaru->prev = NULL;
    l.first->prev = antreanBaru;
    l.first = antreanBaru;
    }
};

void processLast(doublyLinkedList &l){
    address nodeProcess = l.last;
    if (isEmpty(l)){
        cout << "List Kosong";
    }else{
        l.last = l.last->prev;
        l.last->next = NULL;
        process(l,nodeProcess);

    }
    delete nodeProcess;
};

int main(){
doublyLinkedList l;
l.first = NULL;
l.last = NULL;

int docs,choice,halaman;
string judul;

while(true){
    cout << "0 Kerja Baru, 1 Update, 2 Status";
    cin >> choice;
    if (choice == 0){
        while(true){
            cout << "Judul:" << endl;
            cin >> judul;
            if(halaman == 0 || judul == "0"){
                break;
            }
            cout << "Halaman:" << endl;
            cin >> halaman;
            if(halaman == 0 || judul == "0"){
                break;
            }
            address antrean = allocasi(judul,halaman);
            insertFirst(l,antrean);
        }
    }
    if(choice == 1){
            processLast(l);
            processLast(l);
    }
    if(choice == 2){ 
            printProcess(l);
            printSisa(l);
    }
}
}