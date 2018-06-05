#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{				
	int x, y, z;

	//dober je če x > y in y < z
	//dan je če x < y in z = 5
	//si  je če x <= z in y ni = z
	//zaspan je če y < z ali y >= 3 ali x > z

	cout << "Vnesi x:";
	cin >> x;
	cout << "Vnesi y:";
	cin >> y;
	cout << "Vnesi z:";
	cin >> z;
	cout << "\n" << endl;




	if (x > y && y < z){
		cout << "dober" << endl;
	}
	if (x < y && z == 5){	
		cout << "dan" << endl;
	}
	if (x <= z && y != z){
		cout << "si" << endl;
	}
	if (y < z || y >= 3 || x > z){
		cout << "zaspan" << endl;
	}
	
	return 0;
}
