#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {56, 34, 56, 78, 90};

    vector<int> var;
    // inserting aaray in vector
    int n = sizeof(arr) / sizeof(arr[0]);
    // copying the element in the vector
    var.assign(arr, arr + n);
    // printing the element
    for (int num : var)
    {
        cout << num << " ";
    }
    cout << endl;

    // intilize the value
    vector<int> var1(5, 90.20);
    for (auto num : var1)
    {
        cout << num << " ";
    }

    cout << endl;
    var1.at(3) = 788;           // updating the elemement
    cout << var1.at(3) << endl; // Accesin g the element
    cout << var.front() << endl;
    cout << var.back() << endl;

    // inserting element in vector
    var1.push_back(34);
    // var1.insert(var1.begin() + 1, 44);
    var.insert(var1.begin() + 3, {34, 67, 45});
    for (auto num : var1)
    {
        cout << num << " ";
    }
    cout << endl;
}