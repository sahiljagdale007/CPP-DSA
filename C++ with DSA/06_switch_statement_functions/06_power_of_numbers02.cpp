#include <bits/stdc++.h>
using namespace std;

// fuction ek aisa dabba hai jisko hum call karte hai!!
int power()
{
    int a, b;
    cin>> a >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int answer = power();
    cout << "Answer is " << answer << endl;
}