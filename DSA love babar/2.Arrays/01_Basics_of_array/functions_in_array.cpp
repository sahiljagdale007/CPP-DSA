#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done " << endl;
}
int main()
{
    int third[15] = {2, 7};
    printArray(third, 15);

    int fourth[10] = {0};
    printArray(fourth, 10);

    int fifth[18] = {5, 6, 7, 140, 15};
    printArray(fifth, 18);

    char ch[5] = {'a','b','f','d','t'};
    cout << ch[3] << endl;

     for(char i=0; i<=4; i++){
        cout << ch[i]<<" ";
     }
     cout << "printing done" << endl;

     double arrayDouble[5];
     float firstFloat[10];
     bool firstBool[9];


}