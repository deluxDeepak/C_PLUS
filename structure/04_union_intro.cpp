#include <iostream>
using namespace std;
union student
{
    int id;
    char name;
};


int main()

{
    union student std;
    // entering the datatype 
    std.id=7;                           //return the garbage value 
    std.name='d';


    // display the details 
    cout<< std.id<<endl;
    cout << std.name << endl;


}