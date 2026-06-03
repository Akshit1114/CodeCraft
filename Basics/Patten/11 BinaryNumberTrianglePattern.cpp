// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main () {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i%2 != 0 and j%2 != 0) {
                cout << "1 ";
            }
            else if (j%2 == 0 and i%2 == 0) {
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}

// void nBinaryTriangle(int n) {
//     int start = 1;
//     for (int i = 0; i<n; i++){
//         if (i%2 == 0) start = 1;
//         else start = 0;
//         for (int j = 0; j<=i; j++) {
//             cout << start<< " ";
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     bool toggle = true;

//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             toggle = !(toggle);
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             toggle = !(toggle);
//             if (toggle)
//             {
//                 cout << "1 ";
//             }
//             else
//             {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }