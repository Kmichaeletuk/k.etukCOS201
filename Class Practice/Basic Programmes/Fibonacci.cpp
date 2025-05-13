#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    // Input number of terms
    cout << "Input number of terms: ";
    cin >> n;

    // Display the Fibonacci series
    cout << "The first " << n << " terms of the Fibonacci series are: " << endl;
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;           // Update t1
        t2 = nextTerm;     // Update t2
    }
    cout << endl;

    return 0;
}
