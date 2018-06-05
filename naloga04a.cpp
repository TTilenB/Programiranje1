#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{
	int a;
	int n = 0;
	int isum = 0;
	int imax = 0;
	
	
	cout << "Vnesite število: " << endl;
	cin >> a;
	
	int imin = a;
	
	do {
	n = n + 1;
	isum = isum + a;
		if ( a > imax ) {
			imax = a;
		}
		if ( a < imin ) {
			imin = a;
		}
	cin >> a;	
	}
	while (a > 0); 
	

	cout << "\nVnesli ste toliko števil: " << n << endl;
	cout << "Vsota pozitivnih števil je: " << isum << endl;
	cout << "Največje število je: " << imax << endl;
	cout << "Najmanjše število je: " << imin << endl;
	
	
	
	
	
	 return 0;
}
