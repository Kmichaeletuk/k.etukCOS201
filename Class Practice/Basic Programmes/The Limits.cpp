#include <iostream>
using namespace std;

int main() {
    int lower, upper, sum = 0;

    // Input lower and upper limits
    cout << "Input upper limit: ";
    cin >> upper;
    cout << "Input lower limit: ";
    cin >> lower;

    // Display and calculate the sum of odd numbers
    cout << "The odd numbers between " << lower << " and " << upper << " are:" << endl;
    for (int i = lower; i <= upper; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            cout << i << " ";
            sum += i;
        }
    }

    // Display the sum
    cout << endl << "The sum of all odd numbers between " << lower << " and " << upper << " is: " << sum << endl;

    return 0;
}
