#include <iostream>
using namespace std;

int main() {
    int lowerLimit, upperLimit, sum = 0;

    cout << "Enter the lower limit: ";
    cin >> lowerLimit; // Corrected from "cin > lowerLimit;"
    cout << "Enter the upper limit: ";
    cin >> upperLimit; // Corrected from "cin > upperLimit;"

    for (int i = lowerLimit; i <= upperLimit; ++i) {
        if (i % 2 != 0) { // Only odd numbers
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nThe sum of all odd numbers between " << lowerLimit << " and " << upperLimit << " is: " << sum << endl;
    return 0;
}
