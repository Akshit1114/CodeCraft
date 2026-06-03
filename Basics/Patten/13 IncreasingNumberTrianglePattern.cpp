#include <bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n)
{
   int c = 1;
   for (int j = 1; j <= n; j++)
   {
      for (int i = 1; i <= j; i++)
      {
         cout << c++ << " "; // concept post increment first print and then increment
      }
      cout << endl;
   }
}

// void nNumberTriangle(int n) {
//     int num = 1;
//     for (int i = 1; i <=n ; i++) {
//         for(int j = 1; j<= i; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

int main()
{
   int n = 5;
   nNumberTriangle(n);
   return 0;
}
// both are same

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
