// agr ek common base class ho jisme same fucntion defined ho ,aur derived class os function ko accces karre 

#include <iostream>
using namespace std;

// base class 
class person
{
    public:
    void display()
    {
        cout <<"i am person:" <<endl;
    }
};

// example of hirararical inheritance (two or more derived class is formed from the base class)
class teacher:public person{};
class professor :public person{};

// multiple inheritance (derived class inherit multilevel inheritance )
class reasercher : public teacher,public professor{};
int main()
{
    reasercher obj;
    // obj.display();                      //display is ambiguis (shows ambiguity )
    return 0;
}