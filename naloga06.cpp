#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{
	float rab, rca, rbc;
	float ax = 1, ay = 2, az = 3;
	float bx = 3, by = 2, bz = 1;
	float cx = 4, cy = 5, cz = 6;
	float ix = 0, iy = 0, iz = 0;
	float bliza, blizb, blizc, blizu;
	
	float temp;
	char potr;
	
	cout << " A zelite vnesti svoje tocke?(y/n) " << endl;
	cin >> potr;
	
	if ( potr == 'y') {
		cout << "Zdaj boste vnesli tocko A: " << endl;
		cin >> ax >> ay >> az;
		cout << "Zdaj boste vnesli tocko B: " << endl;
		cin >> bx >> by >> bz;
		cout << "Zdaj boste vnesli tocko C: " << endl;
		cin >> cx >> cy >> cz;
	}	
		else {
			cout << "V tem primeru bodo uporabljene tocke A(1, 2, 3), B(3, 2, 1) in C(4, 5, 6). " << endl;
		}
	
	cout << "\nAli hocete vnesti tocko, ki bo zamenjala izhodiscno tocko?" << endl;
	cin >> potr;
	
	if ( potr == 'y') {
		cout << "\nZdaj boste vnesli tocko.(y/n) " << endl;
		cin >> ix >> iy >> iz;
	}	
		else {
			cout << "\nV tem primeru bo uporabljeno izhodisce. " << endl;
		}
	
	rab = sqrt(pow((ax - bx), 2) + pow((ay - by), 2) + pow((az - bz), 2));
	rbc = sqrt(pow((bx - cx), 2) + pow((by - cy), 2) + pow((bz - cz), 2));
	rca = sqrt(pow((cx - ax), 2) + pow((cy - ay), 2) + pow((cz - az), 2));
	
	bliza = sqrt(pow((ax - ix), 2) + pow((ay - iy), 2) + pow((az - iz), 2));
	blizb = sqrt(pow((bx - ix), 2) + pow((by - iy), 2) + pow((bz - iz), 2));
	blizc = sqrt(pow((cx - ix), 2) + pow((cy - iy), 2) + pow((cz - iz), 2));
	
	float bla = bliza;
	float blb = blizb;
	float blc = blizc;  
	
	if (bla > blb)
	   {
		  temp = bla;
		  bla = blb;
		  blb = temp;
	   }
   if (blb > blc)
	   {
		  temp = blb;
		  blb = blc;
		  blc = temp;
	   }
   if (bla > blb)
	   {
		  temp = bla;
		  bla = blb;
		  blb = temp;
	   }
	
	blizu = bla;
	
	cout << "\nRazdalja med točkama A in B je: \n" << rab << endl;
	cout << "Razdalja med točkama C in A je: \n" << rca << endl;
	cout << "Razdalja med točkama B in C je: \n" << rbc << endl;
	
	if (blizu == bliza) {
		cout << "\nNajblizja je tocka A in razdalja je: " << bliza << endl;
		cout << "\n 1" << endl;
	}
		else if (blizu == blizb) {
				cout << "\nNajblizja je tocka B in razdalja je: " << blizb << endl;
				cout << "\n 2" << endl;
			}
			else {
				cout << "\nNajblizja je tocka C in razdalja je: " << blizc << endl;
				cout << "\n 3" << endl;
			}
	

	 return 0;
}
