#include <iostream>
using namespace std;
int score = 40;

int main() {
    if(score>=70 && score<=100)
       { cout << "Grade A"<<endl
        cout << "Excellent"<<endl;}
    else if(score>=60)
         {cout <<"Grade B"<<endl;
         cout <<"Very Good"<<endl;}
    else if(score>=50)
         cout <<"Grade D"<<endl;
    else if(score>=40)
         cout <<"Grade E"<<endl;
    else if(score>=0 && score<40)
         cout <<"Grade F"<<endl;
}