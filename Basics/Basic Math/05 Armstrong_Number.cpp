// Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.
// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
/*
Example 1:
Input:N = 153
Output:True
Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
Example 2:
1⁴ + 6⁴ + 3⁴ + 4⁴
= 1 + 1296 + 81 + 256
= 1634
*/

#include <bits/stdc++.h>
using namespace std;


bool isArmstrong(int n){

    int len = (n == 0) ? 1 : (int)(log10(n) + 1);
    int total = 0;
    int temp = n;
    while(temp > 0){
        int digit = temp % 10;
        total += pow(digit, len);  // pow return double, so u can explicitly cast it to int or let it be
        temp /= 10;
    }

    return total == n;
    // Time Complexity: O(log10N + 1) Space Complexity: O(1)
}

int main(){
    int n;
    cin >> n;

    cout << isArmstrong(n) << endl;

    return 0;
}