#include <iostream>
using namespace std;
class base
{
private:
    int data;

public:
    base(int value)
    {
        data = value;
        cout << "base is called " << data << endl;
    }
};
class derived : public base
{
private:
    int x;

public:
    // intilizing base class using initializer_list
    derived(int value1) : base(value1)
    {
        x = value1;
        cout << x <<endl;
        cout << "derived class called :" << endl;
    }
};
int main()
{
    derived obj(89);
    return 0;
}