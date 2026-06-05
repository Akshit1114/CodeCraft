/* 
Problem Statement: Given an integer N, check whether it is prime or not. 
A natural number greater than 1 that has exactly two positive divisors: 1 and itself.
Example 1:
Input:N = 2
               
Output:True
                
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
*/
#include <bits/stdc++.h>
using namespace std;

// method 1
// bool isPrime(int n) {

//     if (n <= 1) return false;
//     int cnt = 0; 

//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             cnt++;  
//         }
//     }

//     return cnt == 2;

//     // TC => O(n) SC => 0(1)
// }

// method 1.1
// bool isPrime(int n) {
//     if (n <= 1) return false;

//     for (int i = 2; i < n; i++) {
//         if (n % i == 0)
//             return false;
//     }

//     return true;
// }

// method 2
bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {      //If a number has a divisor greater than √N, it must also have a divisor smaller than √N.
        if (n % i == 0)
            return false;
    }

    return true;
    // Time Complexity: O(sqrt(N)) Space Complexity : O(1)
}




int main () {
    int n; 
    cin >> n;

    cout << isPrime(n);

    return 0;
}