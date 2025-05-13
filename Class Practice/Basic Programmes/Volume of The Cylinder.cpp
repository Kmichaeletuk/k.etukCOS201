#include <iostream>
using namespace std;

int main() {
    const double pi = 3.142;
    double radius, height, volume;

    cout << "Enter radius and height of the cylinder: ";
    cin >> radius >> height;

    volume = pi * radius * radius * height;
    cout << "Volume of the cylinder: " << volume << endl;

    return 0;
}
