#include <iostream>
using namespace std;
// used to combine differnet type of data type 
// the elements are stored in a continuos memory 
struct student
    {
        int marks;
        int id;
        string name;
    };
int main()
{
    struct student s1;
    // taking the input 
    s1.id=234948;
    s1.marks=89;
    s1.name="Deepak";
    
    // displaying the output 
    cout<<s1.id << endl;
    cout << s1.name;                //here dot is called structure member operator (this is used in between structur name and member name )

    
}