// base class with defult and parameterized constructor
// jitna default constructor base class me  hai otna hi otna hi derieved me banana parega /

#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "base class is callled:" << endl;
    }
    base(int x)
    {
        cout << "parametired constructor :" << x << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "derived class constructor call ;" << endl;
    }
    derived(int x) : base(x)
    {
        cout << "parametr derived class:" << x << endl;
    }
};
int main()
{
    // call the default constructor 
    derived obj;

    // call the parametrized constructor 
    derived obj1(565);
    
    return 0;
}