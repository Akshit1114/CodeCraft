#include <iostream>
using namespace std;

// 1          1
// 12        21
// 12       321
// 1234    4321
// 12345  54321
// 123456654321

int main()
{
    int n = 5;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }
        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

/*
void numberCrown(int n) {
    int space = 2*(n-1);
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout << j<< " ";
        }

        for (int j = 0; j <space; j++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
        space -= 2;
    }

}
*/
