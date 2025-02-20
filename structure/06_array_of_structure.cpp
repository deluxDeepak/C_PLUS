#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    typedef struct student
    {
        int id;
        float marks;
        char name[34];

    } book_array;

    // making array of structure (storing the structur into array )
    // we can use loop on this (same as array (this is same as int arr[3]))
    book_array arr[3];
    arr[0].id=1263590;
    arr[0].marks=78;
    strcpy(arr[0].name,"Deepak");

    arr[1].id=1263590;
    arr[1].marks=78;
    strcpy(arr[1].name,"Ravi");

    arr[2].id=1263590;
    arr[2].marks=78;
    strcpy(arr[2].name,"Ramuu");


    for (int i = 0; i < 3; i++)
    {
        
        cout << arr[i].name << endl;
        cout<<arr[i].id <<endl;
        cout <<arr[i].marks <<endl;
    }
    

    
}