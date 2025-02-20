#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> var={67,56,324,55,67};
    for (auto it=var.rbegin(); it !=var.rend() ;it++)
    cout<<*it << " ";

}