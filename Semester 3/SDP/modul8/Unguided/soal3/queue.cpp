#include <iostream>
using namespace std;
#include "queue.h"

const int IdxMax = 5;

int succ(int i) {
    if (i == IdxMax) {
        return 1;
    }else{
        return i + 1;
    }
}

void CreateQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = 0;
}

bool isEmptyQueue(Queue Q) {
    return (Q.head == 0 && Q.tail == 0);
}

bool isFullQueue(Queue Q) {
    return (succ(Q.tail) == Q.head);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue sudah penuh!" << endl;
        return;
    }
    if (isEmptyQueue(Q)) {
        Q.head = 1;
        Q.tail = 1;
    } else {
        Q.tail = succ(Q.tail);
    }
    Q.info[Q.tail] = x;
}

infotype dequeue(Queue &Q) {
    infotype x;
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -9999;
    }
    x = Q.info[Q.head];
    if (Q.head == Q.tail) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.head = succ(Q.head);
    }
    return x;
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << " | ";
    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
        return;
    }
    int i = Q.head;
    while (true) {
        cout << Q.info[i] << " ";
        if (i == Q.tail) break;
        i = succ(i);
    }
    cout << endl;
}