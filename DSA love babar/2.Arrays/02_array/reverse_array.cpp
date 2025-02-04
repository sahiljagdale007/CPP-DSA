//--------------------------reverse array---------------------------------
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;   //index 0 se n - 1 pe hot hai!

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {11, 4, 5, -5, 15, 6};
    int brr[5] = {1, 2, 3, 4, 5};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}