#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
		char op;
	float num, num1, num2, num3;
	string temp;

	cout << " Zdravo!\n\n Dobrodosli v kalkulator verzija 0.0000<tu nege pride 1> alfa." << endl;
	cout << " Trenutno lahko uporablja tri stevila na enkrat." << endl;
	cout << "\n Press enter to Continue." << endl;
	temp = cin.get();

	cout << " Tukaj so prikazani vsi operatorji kere lejko uporabljate:\n" << endl;
	cout << "	*Sestevaje* " << " *Odstevanje* " << " *Mnozenje* " << " *Delejenje* " << endl;
	cout << "	*    +    * " << " *    -     * " << " *   *    * " << " *    /    * " << endl;
	cout << "	*********** " << " ************ " << " ********** " << " *********** " << endl;

	cout << "\n Press enter to Continue." << endl;
	temp = cin.get();

	cout << " Prvo, koloko operaterjev boste uporabljali: " << endl;
	cin >> num;

	if (num == 1) {
		cout << " Zdaj boste vnesli operatorje.\n (Naprimer: + pomeni num1 + num2): " << endl;
		cin >> op;

		cout << " Zdaj pa vnesite prvo stevilo: ";
		cin >> num1;

		cout << " Zdaj pa vnesite drugo stevilo: ";
		cin >> num2;
	}
		else if (num == 2)
		{
			cout << " Zdaj boste vnesli operatorje.\n (Naprimer: + pomeni num1 + num2): " << endl;
			cin >> op;

			cout << " Zdaj pa vnesite prvo stevilo: ";
			cin >> num1;

			cout << " Zdaj pa vnesite drugo stevilo: ";
			cin >> num2;

			cout << " Zdaj pa vnesite tretje stevilo: ";
			cin >> num3;
		}
			else
			{
				cout << "Toliko stevilo operaterje ni podprto v tej verziji.";
			}

	switch (op)
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

	case '++':
		cout << num1 + num2 + num3;
		break;

	case '+-':
		cout << num1 + num2 - num3;
		break;

	case '+*':
		cout << num1 + num2 * num3;
		break;

	case '+/':
		cout << num1 + num2 / num3;
		break;

	case '--':
		cout << num1 - num2 - num3;
		break;

	case '-+':
		cout << num1 - num2 + num3;
		break;

	case '-*':
		cout << num1 - num2 * num3;
		break;

	case '-/':
		cout << num1 - num2 / num3;
		break;

	case '**':
		cout << num1 * num2 * num3;
		break;

	case '*+':
		cout << num1 * num2 + num3;
		break;

	case '*-':
		cout << num1 * num2 - num3;
		break;

	case '*/':
		cout << num1 * num2 / num3;
		break;

	case '//':
		cout << num1 / num2 / num3;
		break;

	case '/+':
		cout << num1 / num2 + num3;
		break;

	case '/-':
		cout << num1 / num2 - num3;
		break;

	case '/*':
		cout << num1 / num2 * num3;
		break;

	default:
		cout << " Error! Operator ni pravilen." << endl;
		break;
	}
			
	cout << " \nSte zakljucili?" << endl;

	return 0;
}
	
