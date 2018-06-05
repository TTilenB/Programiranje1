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
	while (n < 0 || n > 15);
	
	char tab[n];
	char tab2[n*2];
	
	cout << "\nVnesite " << n << " elementov, da bodo shranjeni: " << endl;
	for (int i = 0; i < n; i++)
	{
			cin >> tab[i];		
	}
		
	cout << "\nElementi, ki ste jih vnesli so: \n" << endl;
	while (i < n)
	{
		cout << tab[i] << " " ;
		i++;
	}
	
	for (int i = 0; i < n; i++)
	{
			tab2[i*2] = '*';
			tab2[2*i+1] = tab[n-i-1];		
	}
	
	cout << "\n\n"; 
	i = 0;
	while (i < 2*n)
	{
		cout << tab2[i]; 
		i++;
	}
	
	
	cout << "\n"; 
	i = 0;
	do
	{
		tab2[i*3] = '%';
		i++;
	}
	while (i < 2*n);
	
	
	cout << "\n"; 
	i = 0;
	while (i < 2*n)
	{
	cout << tab2[i];
	i++;
	}
	

	 return 0;
}
