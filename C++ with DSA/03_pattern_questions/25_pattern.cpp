#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

   int row = 1;
    while(row<=n){
        //Part 1 : numbers from 1 to n-i+1
        int col=1;
        while(col <= n - col + 1){
            cout<<col<<" ";
            col = col + 1;
        }
        //part 2: stars (i-1)*2 times
        col = 1;
        while(col<=(row-1)*2){
            cout<<"* ";
            col = col + 1;
        }
        //part 3 : numbers from n- i *1 to 1
        col = n-row + 1;
        while(col>=1){
            cout<<col<<" ";
            col = col - 1;-
        }
        row = row + 1;
        cout<<endl;
    }
}