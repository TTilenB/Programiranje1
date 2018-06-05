#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{				
	int i;					
	cout << "Vnesite celo stevilo: ";
	cin >> i;				
	switch (i)  
  	{
   		case 1 : cout << "Ponedeljek"<<endl;	
					break;
   		case 2 : cout << "Torek"<<endl;	
            		break;
   		case 3 : cout << "Sreda"<<endl;		
            		break;
   		case 4 : cout << "Četrtek"<<endl;		
            		break;
        case 5 : cout << "Petek" << endl;
					break;
		case 6 : cout << "Sobota" << endl;			
					break;
		case 7 : cout << "Nedelja" << endl;
					break;
  		default : cout << "Oj oj oj!!! Ena do sedem, ka nevejš ka ma teden sedem dni?!"<<endl;
            		break;				
  	}	
	return 0;
}
