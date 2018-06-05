#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{				
	int n, m;
	int sum = 0;
	int soda = 0;
	int liha = 0;
	int sedem = 0;
	
	cout << "Vnesli boste dve puljubni števili npr.: 4 in 11.";
	cout << "\nVnesite eno število: ";
	cin >> n;
	cout << "Vnesite še drugo število: ";
	cin >> m;
	

	if (n < m) {
		do {
			cout << "Število je: " << n << endl;
			sum = sum + n;
			n = n + 1;
			
			if (n % 2 == 0) {
				soda = soda + n;
				}
			if (n % 2 != 0) {
				liha = liha + n;
				}
			if (n % 7 == 5) {
				sedem = sedem + n;
				}
			}
			while (n < m);
	cout << "\nVsota števil je: " << sum + m << endl;
	}
	
	if (m < n) {
		do {
			cout << "Število je: " << m << endl;
			sum = sum + m;
			m = m + 1;
			
			if (m % 2 == 0) {
				soda = soda + m;
				}
			if (m % 2 != 0) {
				liha = liha + m;
				}
			if (m % 7 == 5) {
				sedem = sedem + m;
				}
			}
			while (m < n);
	cout << "\nVsota števil je: " << sum + n << endl;
	}

	cout << "Vsota sodih števil je: " << soda << endl;
	cout << "Vsota lihih števil je: " << liha << endl;
	cout << "Vsota števil deljivih z sedem je: " << sedem << endl;






    return 0;
}
