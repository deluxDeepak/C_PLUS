#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i=0,n,fact=1;
    cout<<"Enter the number :";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n <<" is "<<fact<< endl;
}