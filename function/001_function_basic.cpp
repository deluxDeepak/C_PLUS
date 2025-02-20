#include <iostream>
using namespace std;
// call by value

void sum(int a, int b) // formal parameters
{
    cout << a + b;
}
int main()
{
    sum(45, 67); // actual parametrs

    return 0;
}