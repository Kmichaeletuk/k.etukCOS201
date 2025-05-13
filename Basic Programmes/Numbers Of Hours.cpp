#include <iostream>
using namespace std;

int main() {
    int totalMinutes, hours, minutes;

    cout << "Enter the total number of minutes: ";
    cin >> totalMinutes;

    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;

    cout << "Time: " << hours << ":" << minutes << endl;

    return 0;
}
