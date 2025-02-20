// hirarical inheritance (multiple derived class inherit from single base class)
// vehical example
#include <iostream>
using namespace std;
class vehical
{
public:
    void start()
    {
        cout << "base vehical :" << endl;
    }
};
class bike : public vehical
{
public:
    void drive()
    {
        cout << "Bike driving :" << endl;
    }
};

class car : public vehical
{
public:
    void ride()
    {
        cout << "Riding the car :" << endl;
    }
};
int main()
{
    car mycar;
    mycar.start();
    mycar.ride();

    bike my_bike;
    my_bike.start();
    my_bike.drive();
    return 0;
}