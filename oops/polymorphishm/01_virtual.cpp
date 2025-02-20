#include <iostream>
#include <cstring>
using namespace std;
class animal
{
protected:
    int data;
    char name[39];

public:
    // s pointing to the cahr array
    animal(int data, char *s)
    // value char array me dalna
    {
        strcpy(name,s);
        this->data=data;
    }
};

class dog 
int main()
{
    return 0;
}