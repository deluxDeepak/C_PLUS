#include <iostream>
using namespace std;

// function declaration &definition
int deepak(int temp)
{
    return temp;
}



// functoion declaration calling the function in other part of the code 
void serv(int cups);

int main()
{
    int var = deepak(67);
    cout << var;

    // function call
    serv(3);

    return 0;
}


// function definition
void serv(int cups)
{
    cout << "serve " << cups << " chai";
}
