// Use switch statement to print the number of notes you need for the given input
#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int amount,note100,note50,note20,note1;
    note100=note50=note20=note1=0;

    cout <<"Enter the amount: ";
    cin>>amount;

    switch(1)

    {
        case 1: 
              note100 = amount / 100;
              amount = amount % 100;
              break;
        case 2: 
              note50 = amount / 50;
              amount = amount % 50;
              break;
        case 3: 
              note20 = amount / 20;
              amount = amount % 20;
              break;
        case 4:
             note1 = amount;
    }

    cout << "Number of 100 Rs notes : " << note100 << endl;
    cout << "Number of 50 Rs notes : " << note50 << endl;
    cout << "Number of 20 Rs notes : " << note20 << endl;
    cout << "Number of 1 Rs notes : " << note1 << endl;

    return 0;
}