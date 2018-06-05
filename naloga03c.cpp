#include <iostream>		
#include <math.h>		
using namespace std;
int main ()	
{				
    char op;
    float num1, num2;

    cout << "Vnesite operator + ali - ali * ali /: ";
    cin >> op;

    cout << "Vnesite dve števili: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;

        default:
            cout << "Eror! operator ni pravilen";
            break;
    }

    return 0;
}
