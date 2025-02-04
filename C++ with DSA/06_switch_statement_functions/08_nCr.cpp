#include <bits/stdc++.h>
using namespace std;

int fact(int n)   //this is the factorial fuction 
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)  //this is the nCr function
{
    int num = fact(n); 

    int denom = fact(r) * fact(n - r);

    int ans = num / denom;  

    return ans;
}
int main()
{
    int n , r;
    cin >> n >> r;

    cout << "Answer is " << nCr(n,r) <<endl;
}