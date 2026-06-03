// # include <iostream>
#include <bits/stdc++.h>
using namespace std;

void starPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void starPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        int star = 2 * i + 1;
        int spaces = (n - i) - 1;
        cout << string(spaces, ' ') << string(star, '*') << string(spaces, ' ') << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    starPattern(n);
    return 0;
}

//      *
//     ***
//    *****
//   *******
//  *********

// in py
// n = int(input())
// for i in range(0,n):
//     star = 2 * i + 1;
//     spaces = (n - i) - 1;
//     print(spaces*" ", star*"*",spaces*" ")