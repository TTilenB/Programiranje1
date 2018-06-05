#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{
	
	int n, m = 1, a;
	
	cout << "Vnesite število za dimenzijo: " << endl;
	cin >> n;
	cout << "\n" << endl;
	
	a = n + 7;
	
	for(int i = n; i >= 1; --i)
	{
		cout << a;
		a = a - 2;
			for(int j = 1; j <= i; ++j)
			{
            cout << "+ ";
            
			}
        
        cout << m << endl;
        m = m + 2; 
    } 
	
	
	
	
	
	
	
	
	
	

	 return 0;
}
