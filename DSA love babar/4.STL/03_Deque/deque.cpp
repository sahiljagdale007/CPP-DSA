//-------------------------------DEQUE , DOUBLE ENDEND QUEUE-------------------
// PUSH , POP , INSERCTION , DELETION , RANDOM ACCESS , NOT-CONTIGUOUS

#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    for (int i : d)
    {
        cout << i << " ";
    }cout << endl;

    // d.pop_back();
    // cout << endl;

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout << "Print first index element -> " << d.at(1) << endl;

    cout <<"Front element: "<<d.front() <<endl;

    cout <<"Back element:" <<d.back() <<endl;

    cout << "Empty or not :" <<d.empty() <<endl;

    cout <<"Before erase: " << d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase: "<<d.size() <<endl;

    for(int i:d) {
        cout <<  i <<endl;
    }


    return 0;
}