#include <iostream>		
using namespace std;
int main ()	
{				
    int x = 0;
    int y = 0;
    int z = 0;

   cout << "Ta program bo uredil tri števila\n"
        << "Vnesite prvo število: ";
   cin >> x;
   cout << "Vnesite drugo število: ";
   cin >> y;
   cout << "Vnesite tretjo število: ";
   cin >> z;

   int najmanjsa = 0;
   int srednja = 0;
   int najvecja = 0;
   int temp = 0;

   if (x > y)
   {
      temp = x;
      x = y;
      y = temp;
   }
   if (y > z)
   {
      temp = y;
      y = z;
      z = temp;
   }
   if (x > y)
   {
      temp = x; 
      x = y;
      y = temp;
   }

   najmanjsa = x;
   srednja = y;
   najvecja = z;

   cout << najmanjsa << ", " << srednja << ", " << najvecja << endl;
}
