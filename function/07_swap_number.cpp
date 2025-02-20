#include <iostream>
using namespace std;

// swapping the number by refrance 
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=34,y=67;
    // before swaping 
    cout<<"x="<< x <<" y="<< y<<endl;
    // after swapping 
    swap(x,y);
    cout<<"x="<< x <<" y="<< y<<endl;
}