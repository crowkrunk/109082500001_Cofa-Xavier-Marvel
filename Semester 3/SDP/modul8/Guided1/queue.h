#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>

using namespace std;

typedef struct node *address;

struct node{
    string name;
    address next;
};

typedef struct Q
{
    address Head,Tail = nullptr;
}Q;


bool isFull(Q q);
bool isEmpty(Q q);
void createQueue(Q &q);
void enQueue(Q &q, const string &nama);
void deQueue(Q &q);
void viewQueue(Q q);
void clearQueue(Q &q);

#endif