#include <iostream>
using namespace std;

// operator overloading is a compile time polymorhism
// special meaning to the existing operator
class load
{
private:
    int x, y;

public:
    load(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout << x << endl;
    }
    // when private function is made we use freind function to accces the its friend member
    friend load operator+( load const& obj1, load const&obj2);
};

// friend function declaration
load operator+( load const& obj1, load const&obj2)
{
    // returning the same object
    // obj1.x=70;                                  this can not be change this will show error 
    return load(obj1.x + obj2.x);
}
int main()
{
    load c1(23, 45), c2(45, 67), c3;
    c3 = c1 + c2;
    c3.print();

    return 0;
}