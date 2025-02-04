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
        while (space <= n - row)
        {
            cout << " "; // notice two spaces
            space = space + 1;
        }
        while (col <= row)
        {
            cout << col << " ";
            col = col + 1;
        }
        col = row - 1;
        while (col >= 1)
        {
            cout << col << " ";
            col = col - 1;
        }
        row = row + 1;
        cout << endl;
    }
}