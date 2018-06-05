#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{
	
	int n, m = 2, a;
	
	cout << "Vnesite število za dimenzijo: " << endl;
	cin >> n;
	cout << "\n" << endl;
	
	a = n;
	
		for(int i = n; i >= 1; --i)
		{
			cout << a;
			a--;
			for(int j = 1; j <= i; ++j)
			{
            cout << "* ";
        }
        m = m + 2;
        cout << m << endl;
         
    } 
	
	
	
	
	
	
	
	
	
	

	 return 0;
}
