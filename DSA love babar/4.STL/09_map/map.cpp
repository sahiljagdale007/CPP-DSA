//------------------------------MAPS-----------------------------
//DATA WILL STORE IN THE FORM OF KEY

#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;

    m[1]= "sahil";          // 1 is key and the value of the key is sahil
    m[13]= "jagdale";        //13 is key and the value of the key is jagdale
    m[2]= "sangli";

    m.insert({5,"archana"});

    cout << "Before erase" <<endl;
    for(auto i:m) 
    {
        cout << i.first <<" "<<i.second<<endl;
    }cout << endl;

    cout << "finding - 13 : " << m.count(13) <<endl;

    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m)
    {
        cout << i.first<<" "<<i.second<<endl;
    }

    return 0;
}