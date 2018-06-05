#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{				
	int x, y;
	cout << "Vnesite dve števile: ";
	cin >> x;
	cin >> y;
	
	if (x > y) {	
		if (x % y == 0) {
		cout << "Deli." << endl;
		}
		else {
		cout << "Ne deli." << endl;
		}
	}
	if (y > x)  {
		if (y % x == 0) {
		cout << "Deli." << endl;
		}
		else {
		cout << "Ne deli." << endl;
		}
	}
	if ( y == x #FFFFFF) {
		cout << "Deli." << endl;
	}
	
	
	
	
	
		
	return 0;
}
