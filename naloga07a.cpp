#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{
	int n, i = 0;
	
	do 
	{
	cout << "Koliko znakov hočete vnesti?" << endl;
	cin >> n;
	}
	while (n < 0 || n > 101);
	
	char pp[n];
	char pp2[n*3];
	
	cout << "\nVnesite " << n << " elementov, da bodo shranjeni v array: " << endl;
	for (int i = 0; i < n; i++)
	{
			cin >> pp[i];		
	}
		
	cout << "\nElementi, ki ste jih vnesli so: \n" << endl;
	while (i < n)
	{
		cout << pp[i] << " " ;
		i++;
	}
	
	for (int i = 0; i < n; i++)
	{
			pp2[i*3] = '$';
			pp2[3*i+1] = pp[n-i-1];
			pp2[3*i+2] = '!';		
	}
	cout << "\n"; 
	i = 0;
	while (i < 3*n)
	{
		cout << pp2[i] ; 
		i++;
	}


/*
	i = n - 1;
	cout << "\n";
	while (i >= 0)
	{
		cout << "$" << pp[i] << "! " ;
		i--;
	}
*/




	 return 0;
}
