#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int *p[5] ={a,a+1,a+2,a+3,a+4};
    printf("%u",p[3][1]);
}