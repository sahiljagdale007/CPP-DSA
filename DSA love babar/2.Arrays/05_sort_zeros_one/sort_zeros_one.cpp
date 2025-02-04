//--------------Sort zeros and one, zeros on right side and one in left side-----------------

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }

        if (arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[8] = {1, 0, 1, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}