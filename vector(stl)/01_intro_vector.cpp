#include <iostream>
#include <vector>
using namespace std;


//STl:standard template libraray
int main()
{
    // this is basic vector 
    vector<int> var;

    // this will creates the vector of size 4 
    vector<int> v (4);

    // this is allocate element to the vwctor =2(called initilization )
    vector <int> var1(4,2);

    // multiple value insert in the vector 
    vector <float> var3={56,67,89,90,34};

    // taking input from the user 
    vector <float> var4(5);
    for(int i=0;i<5;i++)
    {
        cin>>var4[i];
    }

    // size of vector can be taken fromm the user (in array this is not allowed )
    int size;
    cin>>size;
    vector<double>var5(size);



    // vector is like array 
    // givng the element in the vector 
    var.push_back(12);
    var.push_back(34);
    var.push_back(56);
    var.push_back(78);
    var.pop_back();

    // this will remove all the value 
    var.clear();

    // remove value from the middle (index number to erase the element is 2)
    v.erase(v.begin() +2);

    // getting front element of the vector 
    cout<< v.front();

    // getting back element from the array 
    cout<<v.back();

    // checking if the vector is empty or not 
    cout<< v.empty();                                   //give 0 and 1 in answer 

    return 0;
}