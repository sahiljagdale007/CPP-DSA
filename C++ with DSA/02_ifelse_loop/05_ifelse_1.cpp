// Program to take say values is postive or negative

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a value a: " << endl;
    cin >> a;

    if (a > 0)
    {
        cout << "A is postive";
    }
    else
    {
        if (a < 0)
        {
            cout << "A is negative";
        }
        else
        {
            cout << "A is 0";
        }
    }
}