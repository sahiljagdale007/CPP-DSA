//---------------------------------PRIORITY QUEUE-------------------------------
// MAX HEAP , MIN HEAP , STORES LARGEST OR MINIMUM ELEMENT AT STARTING

#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> maxi; // max heap

    priority_queue<int, vector<int>, greater<int>> mini; // min heap

    //below is max heap representation

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(5);

    cout << "Size " <<maxi.size() <<endl;
     int n = maxi.size();
    for (int i = 0; i < n ; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop(); 
    } cout << endl;

    //below is min heap representation

    mini.push(5);
    mini.push(8);
    mini.push(2);
    mini.push(7);

    int m = mini.size();

    for(int i=0; i < m; i++) {
        cout << mini.top() <<" ";
        mini.pop();                     //We removed all the elements from mini queue, i.e its giving us true while finding empty or not
    }cout <<endl;

    cout << "Khali hai kya bhai: " <<mini.empty();

    return 0;
}