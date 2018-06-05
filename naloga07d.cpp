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
	while (n < 5 || n > 10);
	
	int a[n];
	int b[n];
	int c[n*2];
	
	cout << "\nVnesite " << n << " elementov, da bodo shranjeni: " << endl;
	for (int i = 0; i < n; i++)
	{
			cin >> a[i];		
	}
	
	cout << "\nElementi, ki ste jih vnesli so: \n" << endl;
	
	
	while (i < n)
	{
		cout << a[i] << " " ;
		i++;
	}
	
	i = 0;
	cout << "\n" << endl;
	
	for (int i = 1; i < n; i+=2)
	{
		cout << a[i] << " ";	
	}
	
	i = 0;
	cout << "\n" << endl;
	
	while (i < n)
	{
		cout << a[i] << "\n";
		i++;
	}
	
	
	cout << "\nElementi b tabele so: \n" << endl;
	
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i] + i + 1;	
	}
	
	i = 0;
	while (i < n)
	{
		cout << b[i] << " ";
		i++;
	}
	
	
	cout << "\n\nElementi c tabele so: \n" << endl;
	
	for (int i = 0; i < n; i++)
	{
		c[2*i] = a[i];
		c[2*i+1] = b[i];	
	}
	i = 0;
	while (i < 2*n)
	{
		cout << c[i] << "\n";
		i++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	

	 return 0;
}
