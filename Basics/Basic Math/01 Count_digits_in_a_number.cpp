// Problem Statement: Given an integer N, return the number of digits in N.
// Example 1:
// Input:N = 12345
// Output:5
// Explanation:  The number 12345 has 5 digits.

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{

    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    return count;

    // Time Complexity: O(log10n  + 1)  Space Complexity : O(1)
}

int countDigitsViaLog(int n)
{
    int count = (n == 0) ? 1 : (int)(log10(n) + 1);
    // int digits = (n == 0) ? 1 : (int)(log10(n) + 1e-10) + 1;
    return count;

    // Time Complexity: O(1)  Space Complexity : O(1)
}

int countDigitsViaString(int n)
{
    int count = to_string(n).size();
    return count;

    // Time Complexity: O(n)  Space Complexity : O(n)
}

int main()
{
    int n;
    cin >> n;
    cout << "N: " << n << endl;
    int digits = countDigitsViaLog(n);
    cout << "Number of Digits in n: " << digits << endl;
    return 0;
}
