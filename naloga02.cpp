#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{				
	float a, b, c, p, v, d, D;
	a = 2;
	b = 3;
	c = 4;
	
	p = 2*(a*b)+2*(a*c)+2*(b*c);
	v = a*b*c;
	d = a*a + b*b + c*c;
	D = sqrt(d);		
					 
	cout << "Stranice so " << a << ", " << b << " in " << c << "." << endl;
	cout << "Površina kvadra je " << p << endl;
	cout << "Volumen kvadra je " << v << endl;
	cout << "Telesna diagonala kvadra je " << D << endl;

						
	return 0;
} 
