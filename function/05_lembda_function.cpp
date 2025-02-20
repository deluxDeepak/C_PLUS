#include <iostream>
using namespace std;

int main()
{
    // lamda function:define one tne and use one time 
    auto prepared=[](int cups)
    {
        cout<<"preparing "<<cups <<" cups of tea" <<endl;

    };
    prepared(45);

}
