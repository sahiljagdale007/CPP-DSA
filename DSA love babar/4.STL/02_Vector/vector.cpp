//-----------------------------------STL Vector----------------------------------


#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
   // vector<int> v(5);    //here we are only giving the size of array, that array will automatically intialize to 0
    vector<int> a(5,1);//here we are giving the size as well as we are initialize to by 1
    
    vector<int>last(a);

    cout << "Print last" << endl;
    for(int i:a) {
        cout << i << " ";
    }cout <<endl;


    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;   //0 index

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;  //1 index

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl; //2 index

    cout << "Size : " << v.size() << endl;

    cout << "Element in the second index is : " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl;
    
    cout << "Back: " << v.back() << endl;

    cout << "Before pop : " << endl;
    for(int i:v) {
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "After pop : " << endl;
    for(int i:v) {
        cout << i << " ";
    }

    return 0;
}