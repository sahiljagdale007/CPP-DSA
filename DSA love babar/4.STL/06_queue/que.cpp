#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Sahil");
    q.push("Ashok");
    q.push("Kumar");

    cout << "Size befor pop: " << q.size() << endl;

    cout << "First element: " << q.front() << endl;

    q.pop();

    cout << "Now first element is: " << q.front() << endl;

    cout << "Size after pop: " << q.size() << endl;

    return 0;
}