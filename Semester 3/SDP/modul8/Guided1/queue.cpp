#include "queue.h"

bool isFull(Q q){
    int count;
    address helperNode = q.Head;
    while (helperNode != nullptr)
    {
        count++;
        helperNode->next;
    }
    if (count == 20){
        return true;
    }
    return false;
}

bool isEmpty(Q q){
    return (q.Head == nullptr && q.Tail == nullptr);
}

void createQueue(Q &q){
    q.Head = q.Tail = nullptr;
}

void enQueue(Q &q, const string &nama){
    if (isEmpty(q)){
        address newNode = new node{nama,nullptr};
        q.Head = q.Tail = newNode;
    }else{
        address newNode = new node{nama,nullptr};
        q.Tail->next = newNode;
        q.Tail = newNode;
    }
}

void deQueue(Q &q){
    if (isEmpty(q)){
        cout << "ITS EMPTY YOU OIL BARREL";
    }else{
        address deleteNode = q.Head;
        cout <<"deleted name : "<< deletedNode->name << endl;
        q.Head = q.Head->next;
        delete deleteNode;
    }
}

void viewQueue(Q q){
    if (isEmpty(q)){
        cout << "ITS EMPTY YOU BILGE RAT";
    }else{
        address helperNode = q.Head;
        while (helperNode != nullptr)
        {
            cout <<"Name : "<< helperNode->name << endl;
        helperNode = helperNode->next;
        }
    }
}

void clearQueue(Q &q){
    if (isEmpty(q)){
        cout << "ITS EMPTY YOU OIL BARREL";
    }else{
    address deletedNode = q.Head;
    while (deletedNode != nullptr)
    {
        deletedNode = deletedNode->next;
        deQueue(q);
    }
    }
}