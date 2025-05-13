#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the value of n
    cout << "Enter value for n: ";
    cin >> n;

    // Generate multiplication table from 1 to n
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
