#include <bits/stdc++.h>
using namespace std;

/*
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/

void AlphaTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A' + n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    AlphaTrianglePattern(n);
}
