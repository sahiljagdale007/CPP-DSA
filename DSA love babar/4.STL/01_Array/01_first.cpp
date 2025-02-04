//-----------------------------------------------------STL SYNTAX--------------------------------------
// here we are going to see syntax of Standard Template Library!!

#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
    int basics[5] = {1, 2, 55, 15, 56};

    // This is a static array, we dont use static array in competitive programming....

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;      //O(1)  --- complexity
    }
    cout << "Element at second index is :  " << a.at(2) << endl;

    cout << "Array is empty or not : " << a.empty() <<endl;

    cout << "Front element of a STL array is :" << a.front() << endl;

    cout << "Last element of a STL array is : " <<a.back() << endl; 

    return 0;
}