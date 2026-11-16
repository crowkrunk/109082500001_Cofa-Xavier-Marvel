#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
cout << "Hello world!" << endl;
stack S;
CreateStack(S);
Push(S,3);
Push(S,4);
Push(S,8);
pop(S);
Push(S,2);
Push(S,3);
pop(S);
Push(S,9);
printInfo(S);
cout<<"balik stack"<<endl;
balikStack(S);
printInfo(S);
return 0;
}