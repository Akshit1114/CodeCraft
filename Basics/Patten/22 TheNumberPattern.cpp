#include <bits/stdc++.h>
using namespace std;

void pattern (int n) {
    for (int i = 0; i<2*n - 1; i++) {
        for (int j=0; j<2*n-1; j++) {
            cout << n - min( min(i,j) , min( (2*n -2) - i , (2*n-2) - j ));
        }
        cout << endl;
    }

}

// void getNumberPattern(int n) {
//     int k = 2 * n - 1;
    
//     // Calculating the values in each cell and printing.
//     for (int i = 0; i < k; i++) {
//         for (int j = 0; j < k; j++) {
//             int x = abs(i - n + 1);
//             int y = abs(j - n + 1);
//             int currCell = (int)max(x, y) + 1;
//             cout << currCell; 
//         }
//         cout << '\n';
//     }
// }


int main () {
    int n = 3; 
    pattern(n);
}