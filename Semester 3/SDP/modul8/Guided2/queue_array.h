#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H
#include <iostream>
using namespace std;

const int THEMAKS = 5; 

typedef 
struct queue
{
    string nama[THEMAKS];
    int head;
    int tail;
}
Q;


bool isFull(Q Q);
bool isEmpty(Q Q);
void createQueue(Q &Q);
void enQueue(Q &Q, const string &nama);
void deQueue(Q &Q);
void viewQueue(Q Q);
void clearQueue(Q &Q);

#endif