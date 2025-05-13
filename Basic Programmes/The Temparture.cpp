#include <iostream>
using namespace std;

int main() {
    double kelvin, fahrenheit;

    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    fahrenheit = ((kelvin - 273.15) * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}
