#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i < 2 * n; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// int main () {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

/* in py
n = int(input())
for i in range(1,2*n):
    star = i
    if (i > n):
        star = 2*n - i
    for j in range(star):
        print("*",end=" ")
    print()


*/