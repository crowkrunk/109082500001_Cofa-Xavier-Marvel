#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "---- Queue Demo Begins  ----" << endl;
    Q Q;
    createQueue(Q);

    cout << "---- enQueue Begins  ----" << endl;
    enQueue(Q, "Gilran");
    enQueue(Q, "Alfa");
    enQueue(Q, "Ideal");
    enQueue(Q, "Father");
    enQueue(Q, "Kevin, THE GREAT AND MIGHTY WIZARD");
    enQueue(Q, "Zabumafu");
    cout << endl;
    cout << "---- enQueue done  ----" << endl;
    viewQueue(Q);

    cout << "---- deQueue Begins  ----" << endl;
    deQueue(Q);
    deQueue(Q);
    deQueue(Q);
    cout << "---- deQueue done  ----" << endl;
    viewQueue(Q);

    cout << "---- clearQueue Begins  ----" << endl;
    clearQueue(Q);
    cout << "---- clearQueue done  ----" << endl;
    viewQueue(Q);

    return 0;
}