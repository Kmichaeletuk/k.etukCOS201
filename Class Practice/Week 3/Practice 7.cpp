#include <iostream>
using namespace std;

int main(){
    char grade = 'D';

    switch(grade) {
        case 'A' :
            cout << "Excellent!" << endl;
            break;
        case 'B' :
            cout << "Very Good!" << endl;
            break;
        case 'C' :
            cout << "Well Done" << endl;
            break;
        case 'D' :
            cout << "You passed" << endl;
            break;
        case 'F' :
            cout << "Better try again" << endl;
            break;
        default :
            cout << "Invalid grade"  <<endl;

        

           
    }
    return 0;
}