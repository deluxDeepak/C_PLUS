// multiple inheritance (derived class inherit from more than one base calss)

#include <iostream>
using namespace std;

// base class 1
class techer
{
public:
    void tech()
    {
        cout << "Teaching student :" << endl;
    }
};
// base class 2
class researcher
{
public:
    void research()
    {
        cout << "counducting research :" << endl;
    }
};

// derived class (inherit from both techer and research )
class professor : public techer, public researcher
{
public:
    // it can access method from the both class 
    void guide_student()
    {
        cout << "guiding student in research project :" << endl;
    }
};
int main()
{
    professor obj;
    obj.tech();
    obj.research();
    obj.guide_student();

    return 0;
}