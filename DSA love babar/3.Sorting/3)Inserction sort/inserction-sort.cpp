//-----------------------------------------------Inserction sort Algorithm-------------------------------------------
// The give solution of inserction sort is from code studio already prepaird quesiton just just understand this!!!!!

#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}