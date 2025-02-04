//---------------------------Alternate array-----------------------------------
// We need to alternate the array here in this alogorithm

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)    //we are cecking here we are inside the array or not
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[5] = {5, 4, 3, 2, 1};

    swapAlternate(even, 8);
    printArray(even, 8);

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}