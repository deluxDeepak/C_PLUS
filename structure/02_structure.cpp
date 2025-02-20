#include <iostream>
#include <string.h>
using namespace std;
struct student
{
    int id,marks;
    char name[12]= "Ravikumar";
} Deepak,Ravi;

// display the name and details 
void print()
{
    cout <<Deepak.name <<endl;
    cout <<Ravi.name <<endl;
}

int main()
{
    strcpy(Deepak.name,"Deepak kumar");
    print();

    

}