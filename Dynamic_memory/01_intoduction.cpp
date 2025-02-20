#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    // ptr as array (you can take the size of the array as input )
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));

    // giving input to teh array 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of aray at %d",i);
        scanf("%d",&ptr[i]);
    }
    // displaying the array 

    // if the size is greater then the garbage value is diplayed 
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value is: %d\n",ptr[i]);
        
    }


    // free function to free the dynamically allocated memory 
    free(ptr);
    return 0;

}