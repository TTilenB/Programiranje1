#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{
	int i = 2, j = 5, k = 3;
	int *k1, *k2, *k3;

	k1 = &i;
	k2 = &j;
	k3 = &k;

	cout << "Vrednost i = " << i << ", j = " << j << ", k = " << k << endl;
	cout << "Vrednost k1 = " << k1 << ", k2 = " << k2 << ", k3 = " << k3 << endl;

	*k1 = 1;
	*k2 = 6;
	k3 = k1;

	cout << "\nVrednost i = " << i << ", j = " << j << ", k = " << k << endl;
	cout << "Vrednost k1 = " << k1 << ", k2 = " << k2 << ", k3 = " << k3 << endl;

	*k3 = *k2;
	*k1 = 8;
	k3 = &k;

	cout << "\nVrednost i = " << i << ", j = " << j << ", k = " << k << endl;
	cout << "Vrednost k1 = " << k1 << ", k2 = " << k2 << ", k3 = " << k3 << endl;






	
	 return 0;
}
