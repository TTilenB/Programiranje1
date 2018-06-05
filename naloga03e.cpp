#include <iostream>		
using namespace std;
int main ()	
{				
    int x = 0;
    int y = 0;
    int z = 0;
    int w = 0;

   cout << "Ta program bo uredil štiri števila\n"
        << "Vnesite prvo število: ";
   cin >> x;
   cout << "Vnesite drugo število: ";
   cin >> y;
   cout << "Vnesite tretjo število: ";
   cin >> z;
   cout << "Vnesite štrto število: ";
   cin >> w;

   int num1 = 0;
   int num2 = 0;
   int num3 = 0;
   int num4 = 0;
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
   if (z > w)
   {
      temp = z; 
      z = w;
      w = temp;
   }
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

	num1 = x;
	num2 = y;
	num3 = z;
	num4 = w;

   cout << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;
}
