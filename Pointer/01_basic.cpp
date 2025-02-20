#include <iostream>
using namespace std;
int main()
{
    int x=3;
    int* ptr=&x;
    // this will print the adress of the varaible
    cout <<ptr << endl;

}

// pointer:Acces the value of the variable whose address is in the pointer 
// by using dereference *(operator )