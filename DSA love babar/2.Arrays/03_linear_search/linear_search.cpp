// Comparing element in one direction to get the required element is called linear search.
// We are going linearly in this!!
//----------------------LINEAR SEARCH---------------------------


#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, 10, -1, 11, 84, 15, 47, 87, 90};
    cout << "Enter the element to search for" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is present " << endl;
    }
    else
    {
        cout << "Key is absent " << endl;
    }
    return 0;
}