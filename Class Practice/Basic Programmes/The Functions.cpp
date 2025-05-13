#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Solve Simultaneous Equation" << endl;
    cout << "2. Convert temperature in Kelvin to Fahrenheit" << endl;
    cout << "3. Calculate the volume of a cylinder" << endl;
    cout << "4. Calculate the volume of a cube" << endl;
    cout << "5. Calculate the volume of a sphere" << endl;
    cout << "6. Convert a given number into hours and minutes" << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            // Solve Simultaneous Equation: ax + by = c and dx + ey = f
            double a, b, c, d, e, f, x, y;
            cout << "Enter coefficients a, b, and c for the first equation (ax + by = c): ";
            cin >> a >> b >> c;
            cout << "Enter coefficients d, e, and f for the second equation (dx + ey = f): ";
            cin >> d >> e >> f;

            double determinant = a * e - b * d;
            if (determinant == 0) {
                cout << "Equations have no unique solution (parallel lines or coincident)." << endl;
            } else {
                x = (c * e - b * f) / determinant;
                y = (a * f - c * d) / determinant;
                cout << "Solution: x = " << x << ", y = " << y << endl;
            }
            break;
        }

        case 2: {
            // Convert Kelvin to Fahrenheit
            double kelvin, fahrenheit;
            cout << "Enter temperature in Kelvin: ";
            cin >> kelvin;
            fahrenheit = ((kelvin - 273.15) * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
            break;
        }

        case 3: {
            // Calculate the volume of a cylinder
            const double pi = 3.142;
            double radius, height, volume;
            cout << "Enter radius and height of the cylinder: ";
            cin >> radius >> height;
            volume = pi * radius * radius * height;
            cout << "Volume of the cylinder: " << volume << endl;
            break;
        }

        case 4: {
            // Calculate the volume of a cube
            double side, volume;
            cout << "Enter the side length of the cube: ";
            cin >> side;
            volume = side * side * side;
            cout << "Volume of the cube: " << volume << endl;
            break;
        }

        case 5: {
            // Calculate the volume of a sphere
            const double pi = 3.142;
            double radius, volume;
            cout << "Enter the radius of the sphere: ";
            cin >> radius;
            volume = (4.0 / 3) * pi * pow(radius, 3);
            cout << "Volume of the sphere: " << volume << endl;
            break;
        }

        case 6: {
            // Convert a given number into hours and minutes
            int totalMinutes, hours, minutes;
            cout << "Enter the total number of minutes: ";
            cin >> totalMinutes;
            hours = totalMinutes / 60;
            minutes = totalMinutes % 60;
            cout << "Time: " << hours << ":" << minutes << endl;
            break;
        }

        default:
            cout << "Invalid option!" << endl;
    }

    return 0;
}
