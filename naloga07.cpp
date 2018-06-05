#include <iostream>		
#include <math.h>		
using namespace std;
float dolzina (int, float x[]);
int main ()	
{

	float a[3], b[3], c[3], d[3], e[3];
	
	for ( int i = 0; i < 3; i++ ) {
		cout << "\nVnesite parametre za vektor: " << endl;
		cin >> a[i]; 
	}
	for ( int j = 0; j < 3; j++ ) {
		cout << "\nVnesite parametre za vektor: " << endl;
		cin >> b[j]; 
	}
	for ( int k = 0; k < 3; k++ ) {
		cout << "\nVnesite parametre za vektor: " << endl;
		cin >> c[k]; 
	}
	
	for ( int m = 0; m < 3; m++ ) {
		d[m] = a[m] + b[m] + c[m];
	}
	
	for ( int n = 0; n < 3; n++ ) {
		e[n] = a[n] - b[n] + 2 * c[n];
	}
	
	
	
	
	
	cout << "\nVsota vektorjev je: \nd = ( " << d[0] << ", " << d[1] << ", " << d[2] << ")" << endl;
	cout << "e = ( " << e[0] << ", " << e[1] << ", " << e[2] << ")" << endl;
	
	cout << "Dolžina a = " << dolzina(3, a) <<endl;
	cout << "Dolžina b = " << dolzina(3, b) <<endl;
	cout << "Dolžina c = " << dolzina(3, c) <<endl;
	cout << "Dolžina d = " << dolzina(3, d) <<endl;
	cout << "Dolžina e = " << dolzina(3, e) <<endl;
	
	 return 0;
}

float dolzina (int, float x[])
{
return sqrt (x[0]*x[0]+x[1]*x[1]+x[2]*x[2]);	
}	




