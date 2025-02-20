#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={34,56,78,89,45,23,55};
    // assing the value 
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int>var;
    var.assign(arr,arr+n);

    var.push_back(34);
    var.insert(var.begin()+2,0);
    // inserting threee element (middle me insertion mehnga hota hai )
    var.insert(var.begin()+7,{34,56,78});

    // this does not craete a copy of the element 
    var.emplace(var.begin()+1,78);

    var.emplace_back(900);



    cout<<"Vector: ";
    for(auto num:var)
    {
        cout<<num <<" ";
    }
    cout<<endl;

    
    return 0;
}