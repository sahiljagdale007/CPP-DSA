//-----------------------Binary Search----------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2; //We did here some smart work in optimised solution 

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right side part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    //value of key is not present
    return -1;
}

int main()
{
    int even[6] = {1, 5, 10, 15, 33, 56};
    int odd[5] = {5, 11, 16, 20, 30};

    int evenIndex = binarySearch(even, 6, 1);

    cout << "Index of 1 is" << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 20);

    cout << "Index of 20 is" << oddIndex << endl;

    return 0;
}