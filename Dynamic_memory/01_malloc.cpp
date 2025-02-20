#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    int n;
    cout<<"Enter the array size :";
    cin>>n;
    // malloc to give the dynamic memory to it 
    ptr=(int*)malloc(n*sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr==NULL)
    {
        cout<<"Memory not allocated :";
        exit(0);
    }
    else
    {
        cout<<"Memory is succesfully allocated." <<endl;

        // enter the element of the array 
        cout <<"Enter the element of array:" <<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>ptr[i];
        }
        for (int i = 0; i < n; i++)
        {
           cout<<ptr[i]<<" ";
        }
    }
    
    return 0;
}