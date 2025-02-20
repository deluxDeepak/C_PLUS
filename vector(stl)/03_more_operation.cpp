#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// copy karne me jayda data use hota hai (dont pass as value )
void display(vector<int> &vec)
{
    cout << "Vector :";
    for (auto num : vec)
    {
        cout << num <<" ";
    }
    cout << endl;
}
int main()
{
    vector<int> ve = {34, 56, 78, 89, 88};

    // vector of size 5
    vector<float>var(5);
    cout<<"size of vector :"<<var.size() <<endl;

    var.resize(8);
    cout<<"size of vector :"<<var.size() <<endl;

    // resieze and left element willl be deleted 
    ve.resize(4);
    cout<<"size of vector :"<<ve.size() <<endl;

    // resize the vector and initilize the vector 
    ve.resize(34,90);
    display(ve);

    return 0;
}