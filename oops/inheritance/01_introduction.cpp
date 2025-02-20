// the capablity of the class ti derive the property from the other class
#include <iostream>
using namespace std;

class base
{
public:
    int var;
    void display()
    {
        cout << "Base var: " << var << endl;
    }
};

class derived : public base
{
public:
    // to display the inherited member
    void display_inherited()
    {
        // call the display function to display the inhertited member
        display();
    }

    // to modify the display member
    void modify(int var2)
    {
        var = var2;
    }
};
int main()
{
    derived obj;
    // to modify the member 
    obj.modify(56);
    // to display the modified member 
    obj.display_inherited();
    return 0;
}
