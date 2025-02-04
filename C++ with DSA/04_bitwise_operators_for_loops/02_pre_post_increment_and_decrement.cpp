#include<iostream>
using namespace std;
int main(){
   int i = 7;
    cout<<(i++)<<endl;
    // 7 i=8   //post increment
    cout<<(++i)<<endl; 
    //9    //pre increment
    cout<<(i--)<<endl;
    //9 i= 8     //post decrement
    cout<<(--i)<<endl;
    //7      //pre increment
}