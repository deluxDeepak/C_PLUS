#include <iostream>
using namespace std;

// call by reference:give the original value to the code ,there is change in the code

void serv(int &cup)
{
    cup = cup + 5;
    cout << "serve cups " << cup << endl;
}

int main()
{
    int chaicup = 2;
    serv(chaicup);
    cout << "total cups are " << chaicup << endl;

    return 0;
}