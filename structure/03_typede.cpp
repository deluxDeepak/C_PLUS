#include <iostream>
using namespace std;
int main()
{
    int*ptr,a;
    int c=90;
    ptr=&c;
    cout <<*ptr<<endl;
    // a=&c;                               //this is invalid 

    typedef int* intpointer;
    intpointer a1,b1;
    int c1=90;
    a1=&c;
    b1=&c;
    cout <<a1<<endl;
    return 0;

}
