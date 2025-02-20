// multilevel inheritance
// derived class act as a base class for another derived class

// vehical and car

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
class sports_car : public car
{
public:
    sports_car(string b, int s, int a) : car(b, s, a) {}
    void show_sports_detail()
    {
        // show_detail_vehical();
        show_car_info();
        cout << "sports car:" << endl;
    }
};
int main()
{
    // know you can call
    sports_car obj("toyot", 400, 7);
    // obj.show_sports_detail();
    // obj.show_car_info();
    obj.show_sports_detail();
    
    // // making the obj of the car and passing the value
    // car obj("toyota", 400, 6);
    // // caling the display functiion
    // obj.show_car_info();
    return 0;
}