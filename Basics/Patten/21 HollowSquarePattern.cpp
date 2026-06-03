# include <iostream>
using namespace std;

// void pattern (int n) {
    
//     if (n>1) {
//         for (int i = 1; i<=n; i++) {
//            cout << "*";
//            if (i==1 or i==n){
//                for (int j =1; j<=n-2; j++) {
//                    cout << "*";
//                }
//            }
//            else {
//                for (int j = 1; j<=n-2; j++) {
//                    cout << " ";
//                }
//            }
//            cout << "*";
//            cout << endl;
//         }
//         }
//         else if (n == 0) cout << "";
//         else{
//             cout << "*";
//         }

// }


void pattern(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (i == 0 || i == n -1 || j == 0 || j== n-1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}


int main () {
    int n = 4;
    pattern(n);
}