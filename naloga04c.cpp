#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{
	
	int n, m = 2, a;
	
	cout << "Vnesite število za dimenzijo: " << endl;
	cin >> n;
	a = n;
	cout << "\n" << endl;
		for ( int i = 0; i < n; ++i ) {
			cout << a;
			a--;
			
			for ( int j = 0; j < i; j++) {
				
				cout << "* ";
			}
			cout << m <<endl;
			m++;
		} 
	
	
	
	
	
	
	
	
	
	

	 return 0;
}
