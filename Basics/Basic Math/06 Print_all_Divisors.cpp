// Problem Statement: Given an integer N, return all divisors of N.
/*
Input: N = 36
Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
*/
#include <bits/stdc++.h>
using namespace std;

// method 1
void getAllDivisors(int n){
    
    for (int i = 1; i<=n; i++){
        if (n%i == 0){
            cout << i << " ";
        }
    }
    // Time Complexity: O(N) Space Complexity: O(1)
}

// method 2

vector<int> getAllDivisorsInArray(int n){
    vector<int> arr;
    for (int i = 1; i<=n; i++){
        if (n%i == 0){
            arr.push_back(i);
        }
    }
    return arr;
}

// method 3
vector<int> getAllDivisorsViaSqRoot(int n){
    vector<int> arr;
    for (int i=1; i*i<=n; i++){
        if (n%i==0){
            arr.push_back(i);
            if (i != (n/i)){
                arr.push_back(n/i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    return arr;

    /*
    Time:  O(√N + k log k) k is the number of divisors
    Space: O(k+logk) k is the number of divisors, logk for sorting
    */
}

int main () {
    int n;
    cin >> n;

    // method 1
    // getAllDivisors(n);

    // method 2
    // vector<int> divisors = getAllDivisorsInArray(n);
    // for (int val : divisors){
    //     cout << val << " ";
    // }

    // method 3
    vector<int> divisors = getAllDivisorsViaSqRoot(n);
    for (int val : divisors){
        cout << val << " ";
    }

    return 0;
}
