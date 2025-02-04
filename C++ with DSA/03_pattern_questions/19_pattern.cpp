#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = n;
    while (row <= n)
    {
        int value = n - row + 1;
        while (value)
        {
            cout<<n-row;
        }
        int col = 1;
        while (col <= row)
        {

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}