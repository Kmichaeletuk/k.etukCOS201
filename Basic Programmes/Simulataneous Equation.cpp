#include <iostream>
using namespace std;

int main() {
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

    return 0;
}
