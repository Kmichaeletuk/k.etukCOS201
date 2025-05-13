# include <iostream>
using namespace std;

int main() {
	
	double h,r ;
	
	cout << "Input the value Of h "; 
	cin >> h ;
	cout << "Input the value Of r ";
	cin >> r; 
	
	int volume_cylinder = h * r * r * 3.142;
	cout << "The Volume Of The Cylinder   " << volume_cylinder << endl;
	
	return 0;
	
	
}