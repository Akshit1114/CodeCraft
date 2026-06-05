// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
/* Example 1:
Input: N1 = 9, N2 = 12

Output: 3
Explanation:
Factors of 9: 1, 3, 9
Factors of 12: 1, 2, 3, 4, 6, 12
Common Factors: 1, 3
Greatest common factor: 3 (GCD) */

#include <bits/stdc++.h>
using namespace std;

/*
int findGCD(int n1, int n2){

    int min_num = min(n1,n2);

    int gcd = 1;

    for (int i=1; i<=min_num; i++){
        if (n1%i == 0 && n2%i==0){
            gcd = i;
        }
    }

    return gcd;

    // Time Complexity: O(min(N1, N2))  Space Complexity : O(1)
}
*/
/*
int findGCD(int n1, int n2)
{
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return 1;

    // Time Complexity: O(min(N1, N2))  Space Complexity : O(1)
}
*/

int findGCDviaEuclideanAlgorithm(int n1, int n2)
{

    /* can also write this
    while (n2 != 0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    */

    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0)
        return n2;
    return n1;

    // Time Complexity: O(min(N1, N2))  Space Complexity : O(1)
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << findGCDviaEuclideanAlgorithm(n1, n2);
    return 0;
}