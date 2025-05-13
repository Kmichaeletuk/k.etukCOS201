# include <iostream>

using namespace std;

int main(){
	int r;
	const double pi = 3.142;
   
	
	cout << "Enter the radius of the sphere ";
	cin >> r;
	
	int volume = (4.0/3) * r * r * pi ;
	
	cout << "The value of the volume of the sphere is  " << volume << endl; 
	
	return 0;
	
}