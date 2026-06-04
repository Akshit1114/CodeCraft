// Problem Statement: Given an integer N return the reverse of the given number.
// Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.
// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int reversedNumber = 0;
    while (n > 0)            // can also use recusion 
    {
        int rem = n % 10;
        reversedNumber = reversedNumber * 10 + rem;
        n = n / 10;
    }
    return reversedNumber;

    // Time Complexity: O(log10n  + 1)  Space Complexity : O(1)
}



int main()
{
    int n;
    cin >> n;

    // if (n>=0){
    //     cout << reverseNumber(n);
    // }
    // else{
    //     n = -1*n;
    //     cout << reverseNumber(n)*-1;
    // }

    int sign = (n < 0) ? -1 : 1;
    cout << sign * reverseNumber(abs(n));

    return 0;
}


// 

/*
int reverseNumberEdgeCases(int n)
{
    int reversedNumber = 0;

    while (n != 0)
    {
        int rem = n % 10;

        if (reversedNumber > (INT_MAX - rem) / 10)
            return 0;

        if (reversedNumber < (INT_MIN - rem) / 10)
            return 0;

        reversedNumber = reversedNumber * 10 + rem;
        n /= 10;
    }

    return reversedNumber;
}

int main()
{
    int n;
    cin >> n;

    cout << reverseNumberEdgeCases(n) << endl;

    return 0;
}
*/