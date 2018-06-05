#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct t_literatura
	{
		int sifra;
		bool trdne_platnice;
		char naziv[30];
		char zalozba[30];
		int leto_izdaje;
		float nabavna_cena;
	};

int main()
{	
	char niz[30],p;
	int a, q;
	
	cout << "Koloko vnosov hocete vnesti?(1-10) " << endl;
	
	do
	{
	cin >> a; 
	}
	while (a < 1 || a > 10);
	cin.ignore();
	t_literatura literatura[a];
	
	for (int i = 0; i < a; i++)
	{
		cout << "Vnesite sifro: " << endl;
		cin.getline (niz, 20);
		literatura[i].sifra = atoi (niz);
		do 
		{
			cout << "Trde platnice: (1-DA | 0-NE) " << endl; 
			cin >> p;
		}
		while ((p!='1') && (p!='0'));
		cin.ignore();
		
		if (p=='1') literatura[i].trdne_platnice = true;
		else literatura[i].trdne_platnice = false;
		
		cout << "Naziv: " << endl;
		cin.getline (literatura[i].naziv,30);
		
		cout << "Zalozba: " << endl;
		cin.getline (literatura[i].zalozba,30);
		
		cout << "Leto izdaje: " << endl;
		cin.getline (niz, 20);
		literatura[i].leto_izdaje = atoi (niz);
		
		cout << "Nabavna cena: " << endl;
		cin.getline (niz, 20);
		literatura[i].nabavna_cena = atof (niz);	
	}

		
	return 0;
}
