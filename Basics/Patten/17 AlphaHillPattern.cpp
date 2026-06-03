// # include <bits/stdc++.h>
// using namespace std;

// void alphaHill(int n) {
//     for (int i = 0; i < n; i++) {
//         char ch = 'A';

//         for (int j = 0; j < n-i-1; j++) {
//             cout << " ";
//         }

//         for (int k = 0; k < 2*i + 1; k++) {
//             if (i >= k) {
//                 cout << ch++ << " ";
//             }
//             else {
//                 char rev = --ch;
//                 cout << --rev << " ";
//             }
//         }

//         for (int j = 0; j < n-i-1; j++) {
//             cout << " ";
//         }
//         cout << endl;

//     }
// }

// int main () {
//     int n = 5;
//     alphaHill(n);
// }

#include <bits/stdc++.h>
using namespace std;

void pattern17(int N)
{

    // Outer loop for the number of rows.
    for (int i = 0; i < N; i++)
    {

        // for printing the spaces.
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        // for printing the characters.
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {

            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // for printing the spaces again after characters.
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        // As soon as the letters for each iteration are printed, we move to the
        // next row and give a line break otherwise all letters
        // would get printed in 1 line.
        cout << endl;
    }
}

// int main()
// {
//     // Here, we have taken the value of N as 5.
//     // We can also take input from the user.
//     int N = 5;

//     pattern17(N);

//     return 0;
// }

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char alphabet = 'A';

        // space
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << alphabet++;
        }
        alphabet -= 2;
        for (int j = 1; j < i; j++)
        {
            cout << alphabet--;
        }

        // space
        for (int j = n - i; j = 0; j--)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}