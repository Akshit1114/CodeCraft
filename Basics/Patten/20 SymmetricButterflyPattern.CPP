# include <bits/stdc++.h>
using namespace std;

void SymmetricButterflyPattern(int n) {
    int spaces = 2*n - 2;
    for (int i = 1; i<=2*n-1; i++) {
        int star = i;
        if (i > n) star = 2*n - i;
        // stars
        for (int j=0; j<star; j++){
            cout << "*";
        }
        // spaces
        for(int j=0; j<spaces; j++) {
            cout << " ";
        }
        // stars
        for (int j=0; j<star; j++){
            cout << "*";
        }
        cout << endl;
        if (i>=n) spaces += 2;
        else spaces -= 2;
    }
}


int main () {
    int n = 5;
    SymmetricButterflyPattern(n);
}