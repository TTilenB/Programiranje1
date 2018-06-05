#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
	srand(time(0));

	int j = 0, r, n, m;
	int I = 0, II = 0, III = 0, IV = 0, V = 0, VI = 0, VII = 0, VIII = 0, IX = 0, X = 0;

	cout << "Kolikokrat hocete, da se RNG izvede? " << endl;
	cin >> n;

	cout << "Kolikokrat hocete, da se vam izpise statistika? \n(NOTE: Prosim vnesite stevilo, ki v deljenju s prejsnjim stevilom producira celo stevilo.) " << endl;
	cin >> m;

	int d = n/m, k = 0, h = 0;
	int ena[m], dva[m], tri[m], stiri[m], pet[m], sest[m], sedem[m], osem[m], devet[m], deset[m];

	while (j < n)
	{
		r = (rand() % 10) + 1;
		
		switch (r)
		{
		case 1:
			I++;
			break;
		case 2:
			II++;
			break;
		case 3:
			III++;
			break;
		case 4:
			IV++;
			break;
		case 5:
			V++;
			break;
		case 6:
			VI++;
			break;
		case 7:
			VII++;
			break;
		case 8:
			VIII++;
			break;
		case 9:
			IX++;
			break;
		case 10:
			X++;
			break;
		}

		if (j == (d*(k+1))-1)
		{
			ena[k] = I;
			dva[k] = II;
			tri[k] = III;
			stiri[k] = IV;
			pet[k] = V;
			sest[k] = VI;
			sedem[k] = VII;
			osem[k] = VIII;
			devet[k] = IX;
			deset[k] = X;
			
			k++;	
		}

		j++;
	}
	
	
	do 
	{	
		if (h == 0)
		{
		cout << h +1 << ". serija: " <<endl;
		cout << "\nEna se pojavi " << ena[h] << " krat." << endl;
		cout << "\nDva se pojavi " << dva[h] << " krat." << endl;
		cout << "\nTri se pojavi " << tri[h] << " krat." << endl;
		cout << "\nStiri se pojavi " << stiri[h] << " krat." << endl;
		cout << "\nPet se pojavi " << pet[h] << " krat." << endl;
		cout << "\nSest se pojavi " << sest[h] << " krat." << endl;
		cout << "\nSedem se pojavi " << sedem[h] << " krat." << endl;
		cout << "\nOsem se pojavi " << osem[h] << " krat." << endl;
		cout << "\nDevet se pojavi " << devet[h] << " krat." << endl;
		cout << "\nDeset se pojavi " << deset[h] << " krat." << endl;
		cout << "________________________________________________________________________________________________________________________________________________________________" << endl;
		}
			else
			{
			cout << h +1 << ". serija: " <<endl;
			cout << "\nEna se pojavi " << ena[h] - ena[h-1] << " krat." << endl;
			cout << "\nDva se pojavi " << dva[h] - dva[h-1] << " krat." << endl;
			cout << "\nTri se pojavi " << tri[h] - tri[h-1] << " krat." << endl;
			cout << "\nStiri se pojavi " << stiri[h] - stiri[h-1] << " krat." << endl;
			cout << "\nPet se pojavi " << pet[h] - pet[h-1] << " krat." << endl;
			cout << "\nSest se pojavi " << sest[h] - sest[h-1] << " krat." << endl;
			cout << "\nSedem se pojavi " << sedem[h] - sedem[h-1] << " krat." << endl;
			cout << "\nOsem se pojavi " << osem[h] - osem[h-1] << " krat." << endl;
			cout << "\nDevet se pojavi " << devet[h] - devet[h-1]<< " krat." << endl;
			cout << "\nDeset se pojavi " << deset[h] - deset[h-1]<< " krat." << endl;
			cout << "________________________________________________________________________________________________________________________________________________________________" << endl;
			}
			
		h++;
		cout << endl;
	}
	while(h < m);

	cout << "V celotnem ciklu RNG-ja se" << endl;
	cout << "\nEna pojavi " << I << " krat." << endl;
	cout << "\nDva pojavi " << II << " krat." << endl;
	cout << "\nTri pojavi " << III << " krat." << endl;
	cout << "\nStiri pojavi " << IV << " krat." << endl;
	cout << "\nPet pojavi " << V << " krat." << endl;
	cout << "\nSest pojavi " << VI << " krat." << endl;
	cout << "\nSedem pojavi " << VII << " krat." << endl;
	cout << "\nOsem pojavi " << VIII << " krat." << endl;
	cout << "\nDevet pojavi " << IX << " krat." << endl;
	cout << "\nDeset pojavi " << X << " krat." << endl;
	cout << "________________________________________________________________________________________________________________________________________________________________" << endl;
	
	h = 0;
	cout << "Serija:  ";
	do
	{
		cout << 1+h++ << "  ";
	}
	while(h < m);
	//--------------------------------------------------------------------------------Ena-------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nEna:     ";
	do
	{
		if (h == 0)
		{
		cout << ena[h] << "  ";
		}
		
		else
		{
		cout << ena[h]-ena[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Dva-------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nDva:     ";
	do
	{
		if (h == 0)
		{
		cout << dva[h] << "  ";
		}
		
		else
		{
		cout << dva[h]-dva[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Tri---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nTri:     ";
	do
	{
		if (h == 0)
		{
		cout << tri[h] << "  ";
		}
		
		else
		{
		cout << tri[h]-tri[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Stiri---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nStiri:   ";
	do
	{
		if (h == 0)
		{
		cout << stiri[h] << "  ";
		}
		
		else
		{
		cout << stiri[h]-stiri[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Pet---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nPet:     ";
	do
	{
		if (h == 0)
		{
		cout << pet[h] << "  ";
		}
		
		else
		{
		cout << pet[h]-pet[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Sest---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nSest:    ";
	do
	{
		if (h == 0)
		{
		cout << sest[h] << "  ";
		}
		
		else
		{
		cout << sest[h]-sest[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Sedem---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nSedem:   ";
	do
	{
		if (h == 0)
		{
		cout << sedem[h] << "  ";
		}
		
		else
		{
		cout << sedem[h]-sedem[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Osem---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nOsem:    ";
	do
	{
		if (h == 0)
		{
		cout << osem[h] << "  ";
		}
		
		else
		{
		cout << osem[h]-osem[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Devet---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nDevet:   ";
	do
	{
		if (h == 0)
		{
		cout << devet[h] << "  ";
		}
		
		else
		{
		cout << devet[h]-devet[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);
	//--------------------------------------------------------------------------------Deset---------------------------------------------------------------------------------------------------
	h = 0;
	cout << "\nDeset:   ";
	do
	{
		if (h == 0)
		{
		cout << deset[h] << "  ";
		}
		
		else
		{
		cout << deset[h]-deset[h-1] << "  ";	
		}
		h++;
	}
	while(h < m);

	return 0;
}
