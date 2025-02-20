#include <iostream>
using namespace std;
class classB;
class classA
{
private:
    int a;

public:
    // constructor
    classA(int value)
    {
        a = value;
    }
    // friend function to acces the private member
    // declaration
    friend void sum(classA, classB);
};
class classB
{
private:
    int b;

public:
    classB(int value1)
    {
        b = value1;
    }
    // friend function to acces the private member
    // declaration
    friend void sum(classA, classB);
};

// definition of the function
void sum(classA obja, classB objb)
{
    cout << "sum=" << obja.a + objb.b << endl;
}
int main()
{
    classA obj1(45);
    classB obj2(34);
    sum(obj1, obj2);
    return 0;
}