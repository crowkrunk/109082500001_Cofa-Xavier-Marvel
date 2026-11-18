#include <iostream>
using namespace std;
#include "queue.h"

#define MaxEl 5

void CreateQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = 0;
}

bool isEmptyQueue(Queue Q) {
    return (Q.head == Q.tail);
}

bool isFullQueue(Queue Q) {
    return (Q.head == 0 && Q.tail == MaxEl - 1);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue Penuh! (Overflow)" << endl;
        return;
    }
    
    Q.info[Q.tail] = x;
    
    if (Q.tail == MaxEl - 1) {
        Q.tail = 0;
    } else {
        Q.tail++;
    }
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue Kosong! (Underflow)" << endl;
        return -9999;
    }

    infotype x = Q.info[Q.head];
    
    if (Q.head == MaxEl - 1) {
        Q.head = 0;
    } else {
        Q.head++;
    }

    return x;
}

void printInfo(Queue Q) {
    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
        return;
    }

    cout << "H=" << Q.head << " T=" << Q.tail << " | ";
    int i = Q.head;
    while (true) {
        cout << Q.info[i] << " ";
        if (i == Q.tail) break;
        
        if (i == MaxEl - 1) {
            i = 0;
        } else {
            i++;
        }
    }
    cout << endl;
}