#include <iostream>
using namespace std;

typedef struct student
    {
        int id;
        float marks;
    } std;
struct student e1,e2;
int main()
{
    // here std is another name of user define data type 
    std s1,s2;
    s1.id=345;
    s2.id=789;
}