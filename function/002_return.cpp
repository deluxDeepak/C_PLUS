#include <iostream>
using namespace std;

// if the data type is declare then we have to give the return value to the function 
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    // in the return case the function will give the adress and can be stored in the variable also 
    cout<<sum(45,89);
}