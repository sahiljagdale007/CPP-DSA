
//----------------------------------Find pivot in array----------------------------------
// Pivot means smallest number which lies in a graph
// We get rotated array concept here

#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[5] = {7,9,1,2,3};

    cout << "The index where pivot lies is : " << getPivot(arr, 5) << endl;
}