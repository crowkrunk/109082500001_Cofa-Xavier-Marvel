#include "List.h"
#include <iostream>
using namespace std;

int main(){
	LinkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    nodeA = alokasi(20,"James" ,"2311102151");
    nodeB = alokasi(21,"Jesse","2211110014");
    nodeC = alokasi(20,"Jeremy","2311110029");
    nodeD = alokasi(21,"jhon","2211102173");
    nodeE = alokasi(21,"Jessica","2311102133");

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    updateFirst(List);
    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);

    return 0;
}