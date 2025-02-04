//Prime number ...Given no is a prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 2;

    while(i<n){
        //divide ho gya not prime
        if(n%i==0){
            cout<< "Not prime for"<< i << endl;
        }
        else{
            cout<<"Prime for "<< i <<endl;
        }
        i = i + 1 ;
    }
}
