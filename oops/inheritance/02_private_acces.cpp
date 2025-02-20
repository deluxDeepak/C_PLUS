// accesing the private member of the class (by getter and setter function)
#include <iostream>
using namespace std;
class base
{
private:
    int var;

public:
    // setter function
    void setvalue(int value)
    {
        var = value;
    }

    // getter function
    int get_value()
    {
        return var;
    }
};
class derived:public base
{
    public:
    void display()
    {
        // access kar sakte hai lekin (direct nahi hoga )
        setvalue(67);

        // yahan pe direct acces nahi milega (direct value change nahi kar sakte hai )
        // var=76;
    }
    
};
int main()
{
    derived obj;

    // isko pehle call karna parega (pehle value set karega )(olta call karne pe adress milta hai )
    obj.display();
    cout <<obj.get_value();
    
    return 0;
}
