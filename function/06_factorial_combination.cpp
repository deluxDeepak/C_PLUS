#include <iostream>
using namespace std;
int factoril(int n)
    {
        int fact=1;
        for (int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int a=factoril(n);
    int r;
    cout<<"Enter r :";
    cin>>r;
    int b=factoril(r);
    int c=factoril(n-r);

    // combination forumula= nCr=n!/(n-r)!*r! 
    cout<<a/(b*r);
}