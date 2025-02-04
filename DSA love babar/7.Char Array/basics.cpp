//----------------------CHAR ARRAY , STRING------------------------

#include <bits/stdc++.h>
using namespace std;

// check for the palindrome
int checkPalindrome(char p[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (p[s] != p[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// here we reverse the giving char string
int reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
// here we measure the length of a array

int getLenght(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "your name is ";
    cout << name;
    cout << endl;

    int len = getLenght(name);

    cout << "Lenght of array is: " << len << endl;

    reverse(name, len);
    cout << "Reverse of a given char array is: " << name << endl;

    cout << "Palindrome or not: " << checkPalindrome(name, len);

    return 0;
}