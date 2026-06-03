#include <bits/stdc++.h>
using namespace std;

void alphaRamp(int n) {
    char x = 'A' ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            cout<<char(x+i)<<" ";
        }
        cout<<endl ;
    }
}

int main ( ) {
    int n = 5;
    alphaRamp(n);

    return 0;
}

/*
A 
B B
C C C
D D D D
E E E E E
*/