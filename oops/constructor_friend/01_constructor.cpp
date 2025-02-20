#include <iostream>
using namespace std;

// using initializer_list (when there is const and reference of value )
class list
{

    public:
    int x,y;
    // reference nahi denge to bhi kam hoga (but reference dena chiye )
    // if not modifying the value then use const keyword 
    list(const int &a,const int &b):x(a),y(b)
    {
        // if you want to modify the value 
        // a=56;                                       //this value cannot modified 


        // this is the value of the class not the given value 
        x=67;
        cout<< x+y;
    }
};
int main()
{
    int x=8,y=89;
    list(x,y);
    return 0;
}