// Problem Statement: Given an integer N, return true if it is a palindrome else return false.
// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

#include <bits/stdc++.h>
using namespace std;

bool isPalindromeNumber(int n)
{

    int originalNum = n;

    int reversedNum = 0;

    while (n > 0)
    {
        int rem = n % 10;
        reversedNum = reversedNum * 10 + rem;
        n = n / 10;
    }

    return originalNum == reversedNum;

    // Time Complexity: O(log10n  + 1)  Space Complexity : O(1)
}

int main()
{
    int n;
    cin >> n;

    cout << isPalindromeNumber(n) << endl;

    return 0;
}

// bool isPalindrome(int x) {

//     if (x < 0 || (x % 10 == 0 && x != 0))
//         return false;

//     int reversedHalf = 0;

//     while (x > reversedHalf) {
//         reversedHalf = reversedHalf * 10 + x % 10;
//         x /= 10;
//     }

//     return (x == reversedHalf) ||                // --> 1221  12 12
//            (x == reversedHalf / 10);             // --> 12321 123/10 12  => 12 12
// }