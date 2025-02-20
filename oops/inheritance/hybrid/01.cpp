// hybrid (combination of two or more than one inheritance )
#include <iostream>
using namespace std;
class a
{
public:
    void display()
    {
        cout << "The display:" << endl;
    }
};

// solving through virtual inheritance

// compiler confuse ho jayega ki khan se display le (b se le ya fir c se le )
class b : virtual public a
{
};
class c : virtual public a
{
};
class d : public b, public c
{
};

int main()
{
    d obj;
    // obj.display();                   this will show ambiguity

    // ambiguity resolve through scope resolutiion
    obj.display();

    // by using scope resolution(idhar specify kar rehe hai ki app a se lijiye
    obj.a::display();
    return 0;
}