#include <bits/stdc++.h>
using namespace std;
int main()
{

    char ch = '1';
    int num = 1;
    cout << endl;

    switch (ch)
    {
    case 1:
        cout << "First Line" << endl;
        break;

    case '1':
        switch (num)
        {
        case 1:
            cout << "The vlaue of num is "<<num << endl;
            break;

        default:
            cout << "It is default case" << endl;
        }
        cout << endl;
    }
    return 0;
}
