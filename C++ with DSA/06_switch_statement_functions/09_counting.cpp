#include <bits/stdc++.h>
using namespace std;
// Function Signature
void printCoutning(int n)
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return ;
}

int main()
{
    int n;
    cin >> n;

    // function call
    printCoutning(n);

    return 0;
}