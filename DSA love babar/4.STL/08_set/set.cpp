//---------------------------------SET---------------------------------------
//UNIQUE ELEMENT STORED IN SET

#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(1);
  s.insert(1);
  s.insert(0);
  s.insert(0);

  for(auto i:s) {
    cout << i <<endl;
  }

  s.erase(s.begin());

  for(auto i : s) {
    cout << i <<endl;
  }cout << endl;

  cout<<"five is present or not: " << s.count(5) <<endl;

    return 0;
}