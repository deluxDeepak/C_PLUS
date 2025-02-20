// function overloading 

#include <iostream>
using namespace std;

void deepak(int cups)
{
    cout<<cups;
}


// teatype=masala          is a default argument 
void deepak(string teatype="maasala")
{
    cout<<"serving"<<teatype<<endl;

}

int main()
{
    // this will call string datatype 
    deepak();

    // this will call int data type 
    deepak(45);
}