#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
// *
// * *
// * * *

/*in py
n = int(input())
for i in range(1,n+1):
    print("* "*i)
*/
