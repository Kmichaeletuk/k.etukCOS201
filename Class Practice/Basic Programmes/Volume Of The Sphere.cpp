#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.142;
    double radius, volume;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0 / 3) * pi * pow(radius, 3);
    cout << "Volume of the sphere: " << volume << endl;

    return 0;
}
