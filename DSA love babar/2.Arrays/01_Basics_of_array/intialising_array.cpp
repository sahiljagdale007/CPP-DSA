#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size) {
    cout << "Printing tha array "<<endl;
}
int main()
{
    int second[3] = {5,8,12};
    // now i am getting actual index value of that array, which index is wehere.......
    cout << "value of second index is: " << second[1] << endl;

    int third[15] = {2,7};
    int n = 15;
    //printing of array
    for(int i = 0; i<n; i++){
        cout << third[i] << " ";
    }

    int fourth[10] = {0};
    n = 10;
    cout<<endl << "Printing the elements from the array: "<< endl;
    for(int i=0; i<n; i++){
        cout << fourth[i] << " ";
    }

}