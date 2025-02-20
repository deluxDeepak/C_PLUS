#include <iostream>
using namespace std;
int main()
{
    // typedef is used to give the alternative name to the string data type 
    typedef unsigned long ul;
    ul l1=45,l2=56;
    cout <<l1;

    // its existing name also work 
    typedef int integer;
    int a=34;
    integer b=45;
    cout <<a <<endl;
    cout <<b << endl;
    return 0;
}