// create a structure type book with name, price , and number of pages as its atributers 
#include <iostream>
#include <string.h>
using namespace std;



int main()
{
    struct book
    {
        // if declaring here the the string we can not define in another way 
        // char name[50]="deepak";                             //this is valid 
        // char name[50];
        // name="deepak";                                      //this is invalid (we strcpy to get the desire result )


        char name[50];
        int no_of_pages;
        float price;
    }a1,a2,a3;

    a1.no_of_pages=301;
    a1.price=809;
    strcpy(a1.name,"Book name1");
    cout << a1.name <<endl;

        
}