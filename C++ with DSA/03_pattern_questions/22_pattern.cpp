#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int space = 1;
        while (space <=n-row)
        {
            cout << " ";
            space = space + 1;
        }
        while (col <= row)
        {
            cout << row;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
}