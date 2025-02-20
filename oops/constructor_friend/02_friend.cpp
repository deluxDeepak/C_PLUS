#include <iostream>
using namespace std;
// introduction to friend function
class sum_two
{
private:
    int x, y;

public:
    sum_two(int value1, int value2)
    {

        x = value1;

        y = value2;
    }
    // defintioon and declaration inside the class

    // this will retrun teh adress to store adresss /
    friend int sum(sum_two obj)
    {
        return obj.x + obj.y;
    }
};
int main()
{
    int value1, value2;
    cin >> value1;
    cin >> value2;
    sum_two obj1(value1, value2);
    // store adress then print
    int x = sum(obj1);
    cout << x;
    return 0;
}