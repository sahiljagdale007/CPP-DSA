// Find sum of all even numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // if (n < 0)
    // {
    //     cout << "Please enter a non-negative integer." << endl;
    // }
    // else
    // {

        int sum = 0;
        int i = 0;
        while (i <= n)
        {
            sum = sum + i;
            i =i + 2;
        }
        cout<<"The sum of even numbers from 0 to "<<n<<" is: "<<sum<<endl;
    }

