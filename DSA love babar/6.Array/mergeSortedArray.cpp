//-------------------------------MERGE SORTED ARRAY---------------------
// WE HAVE TWO ARRAY WE NEED TO MERGE THAT TWO ARRAY AND NEED TO CREATE A SINGLE ARRAY WHICH IS SORTED

#include <bits/stdc++.h>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // copy first array k element
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
        // copy kardo second array ke remainging elemetn ko
        while (j < m)
        {
            arr2[k++] = arr2[j++];
        }
    }

    void print(int ans[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    int main()
    {
        int arr1[5] = {5, 3, 4, 1, 11};
        int arr2[3] = {2, 6, 7};

        int arr3[8] = {0};

        merge(arr1, 5, arr2, 3, arr3);

        print(arr3, 8);
    }
