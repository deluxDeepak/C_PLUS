#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    // ptr as array (you can take the size of the array as input )
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));

    
    // displaying the array 

    // intilaoiation with zero 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value is: %d\n",ptr[i]);
        
    }



    // use of realloc(changes the size dynamically ) 
    printf("Enter the new size of the array :");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));

    // intilaoiation with zero 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value is: %d\n",ptr[i]);
        
    }

    // free function to free the dynamically allocated memory 
    free(ptr);
    return 0;

}