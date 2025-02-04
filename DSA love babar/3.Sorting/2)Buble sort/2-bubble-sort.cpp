//-----------------------------Bubble sort----------------------------------------
// The belows answer is from code studio just for understanding.......................

#include <bits/stdc++.h>
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//-------------------Optimised solution-----------------------------------------

#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {

            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

// In - Place Sort An in - place sorting algorithm sorts the data without requiring 
// additional space proportional to the size of the input.It modifies the original 
// array or data structure, rather than creating a copy of the data.The additional 
// memory usage is typically limited to a few variables(i.e.1)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
                                                                                                                                                                                              