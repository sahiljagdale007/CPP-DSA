#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = a + 1;

    if ((a = 3) == b)   // Here a = 3 assigns the vlaue to the a container above
    {
        cout << a;
    }
    else
    {
        cout << a + 1;
    }
}