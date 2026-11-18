#include <iostream>
using namespace std;
#include "queue.h"

#define MaxEl 5

void CreateQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return (Q.head == -1 && Q.tail == -1);
}

bool isFullQueue(Queue Q) {
    return (Q.tail == MaxEl - 1);
}

void enqueue(Queue &Q, infotype x) {
    if (!isFullQueue(Q)) {
        if (isEmptyQueue(Q)) {
            Q.head = 0;   // elemen pertama -> head ikut ke 0
        }
        Q.tail++;
        Q.info[Q.tail] = x;
    } else {
        cout << "Queue sudah penuh!" << endl;
    }
}

infotype dequeue(Queue &Q) {
    infotype x;
    if (!isEmptyQueue(Q)) {
        x = Q.info[Q.head];
        if (Q.head == Q.tail) {
            Q.head = -1;  // elemen terakhir diambil
            Q.tail = -1;
        } else {
            Q.head++;     // head bergerak saat dequeue
        }
        return x;
    } else {
        cout << "Queue kosong!" << endl;
        return -9999; // sentinel, sesuaikan jika perlu
    }
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << " | ";
    if (isEmptyQueue(Q)) {
        cout << "empty queue";
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
    }
    cout << endl;
}