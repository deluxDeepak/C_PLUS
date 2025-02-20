#include <iostream>
using namespace std;
int main()
{
    int x=3;
    int* ptr=&x;
    // this will print the adress of the varaible
    cout <<ptr << endl;

    // by using * we can change the value of the variable 
    *ptr=56;
    cout << x << endl;

}