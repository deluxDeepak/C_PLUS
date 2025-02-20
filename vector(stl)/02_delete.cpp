#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {34, 56, 78, 89, 45, 23, 55};
    // assing the value
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> var;
    var.assign(arr, arr + n);

    // to delete the single element element
    var.pop_back();

    // erase ka use
    // find(var.begin(), var.end(), 89) may return var.end() if 89 is not found
    // var.erase(find(var.begin(),var.end(),2));               //program may crash if the element is not found

    auto it = find(var.begin(), var.end(), 0);
    {
        if (it != var.end())
        {
            var.erase(it);
        }
        else
            cout << "The element is not persent ..." << endl;
    }

    // clearing the all element in the vector 
    // var.clear();

    cout << "Vector: ";
    for (auto num : var)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}