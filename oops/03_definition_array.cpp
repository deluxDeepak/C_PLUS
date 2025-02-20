#include <iostream>
using namespace std;

int totalchai(int chai[],int size)
{
    int total=0;
    for(int i=0;i<size;i++)
    {
        total=total+chai[i];
    }
    return total;
}
int main()
{
    int chai[5]={78,90,67,89,77};
    int total=totalchai(chai,5);
    cout<<total;

    return 0;
}