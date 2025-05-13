#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter the number you want : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Multiplication table for " << i << ":\t";
        for (int j = 1; j <= 12 ; j++) {
            cout << i << "x"<< j <<"="<<i*j << endl;

        }
        cout <<endl;
    }
    return 0;

    
}
