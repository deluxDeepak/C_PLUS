#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    // this is called structure in structure 
    typedef struct student
    {
        int id;
        float marks;
        char name[34];

    } book_array;
    book_array a1,a2,a3,a4;
    a1.id=109;
    a1.marks=77;
    strcpy(a1.name,"Deepak");

    // now a2=a1 then it will copy the all data in the a2 
    a2=a1;
    cout << a2.id;
    
}