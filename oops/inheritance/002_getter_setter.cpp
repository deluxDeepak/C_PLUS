// getter function is used to get(returning the value ) the value and setter function set the value
// high security deta hai (giving the control acces )
#include <iostream>
using namespace std;
class base
{
private:
    int value;

public:
    // setter function
    void sett_value(int value)
    {
        this->value = value;
    }

    // getter funtion (to return the value )
    int get_value()
    {
        return value;
    }
};
int main()
{
    base obj;
    // to set the value (using setter )
    obj.sett_value(89);

    // to get value (using getter )
    cout << "value is:" << obj.get_value();
    return 0;
}