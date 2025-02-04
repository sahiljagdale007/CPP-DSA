//whenever we create a function and put some array in that function we are giving address from one function to other function
//so that why when we change in array it will also change in another array , it will not act like a scope!!!!
#include <bits/stdc++.h>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the function" << endl;

    arr[0] = 120; 

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" "<<endl;
    }

    cout << "Going back to main function" << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    update(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}