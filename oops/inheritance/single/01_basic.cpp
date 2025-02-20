// vehical and car
// {
// vaehical common property like speed brand applicable to all type of vehical
// }

// {
// car is specific type of vehical that inherit property of vehical (adds features like seating capacity )
// }

#include <iostream>
using namespace std;

// base class
class vehical
{
protected:
    string brand;
    int speed;

public:
    vehical(string b, int s)
    {
        brand = b;
        speed = s;
    }
    void show_detail_vehical()
    {
        cout << "Brand :" << brand << endl;
        cout << "speed :" << speed << "km/h" << endl;
    }
};
class car : public vehical
{
private:
    int seting_capacity;

public:
    // calling the base constructor (and calling derived classs constructor )
    car(string b, int s, int seat) : vehical(b, s)
    {
        seting_capacity = seat;
    }
    void show_car_info()
    {
        // calling base class function (to show the details of vehical)
        show_detail_vehical();

        // giving the details of car(putting additional details )
        cout << "Seating capacity: " << seting_capacity << " person" << endl;
    }
};
int main()
{

    // making the obj of the car and passing the value
    car obj("toyota", 400, 6);
    // caling the display functiion 
    obj.show_car_info();
    return 0;
}