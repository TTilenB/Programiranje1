#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{				
	float a, b, c, d, x1, x2;
	a = 1;
	b = 3;
	c = -10;
	
	d = b*b - 4*a*c;
	
	x1=(-b+sqrt(d))/float(2)/a;
	x2=(-b-sqrt(d))/float(2)/a;
	
	
	cout << "Imamo števila " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << "\n" << endl;
	
	

	if  ( d < 0 ) {
		cout << "Kvadratna enačba je " << a << "*x*x+" << b << "*x" <<  c << "=0" <<"."<< endl;
		cout << "Diskriminanta je " << d << "." << endl;
		cout << "Enačba nima realnih rešitev." << endl;
	}
		else {
		cout << "Kvadratna enačba je " << a << "*x*x+" << b << "*x" <<  c << "=0" <<"."<< endl;
		cout << "Diskriminanta je " << d << "." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
		} 


						
	return 0;
}
