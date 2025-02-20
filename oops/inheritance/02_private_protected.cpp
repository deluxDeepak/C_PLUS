// accessing the private member using the protected
// protected directly derived class me acces ho jata haia

#include <iostream>
using namespace std;
class base
{
protected:
    int data;

public:
    base(int value) { data = value; }

};
class derived : public base
{
public:
    // initilize karne ka tarika
    derived(int val) : base(val) {}
    void show_data()
    {
        // direct access mil sakta hai
        cout << "data: " << data << endl;
    }
};
int main()
{
    derived obj(67);
    obj.show_data();
    return 0;
}