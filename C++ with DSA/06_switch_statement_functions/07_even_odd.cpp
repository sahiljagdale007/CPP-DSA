#include<bits/stdc++.h>
using namespace std;

bool isEven(int a){     //this is a function which calls
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int num;
    cin >> num ;

    if(isEven(num)) {
        cout << "Number is Even" << endl;
    }
    else{
      cout << "Number is Odd" << endl;
   }
       return 0;
    }
    
