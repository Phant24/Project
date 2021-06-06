#include<iomanip>
#include<iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char typ;
	unsigned long int chislo1 = 0, chislo2 = 0, result = 0;
	//переводимо в 10-тичну систему 
	cout << "Введіть перше число" << endl;
	cin >> hex >> chislo1;
	cout << dec << chislo1 << endl;
	cout << "Введіть друге число" << endl;
	cin >> hex >> chislo2;
	cout << dec << chislo2 << endl;
	//вибираємо дію між числами
	cout << "Choose: A-додавання, B-віднімання, C-множення, D-ділення" << endl; cin >> typ;

	switch (typ)
	{
	case 'A':
		cout << "Додавання" << endl;
		result = chislo1 + chislo2;		//розрахунок в 10-тичній системі
		cout << hex << result << endl;	 //переводимо в 16-кову систему
		break;
	case 'B':
		cout << "Віднімання" << endl;
		result = chislo1 - chislo2;
		cout << hex << result << endl;
		break;

	case'C':
		cout << "Множення" << endl;
		result = chislo1 * chislo2;
		cout << hex << result << endl;
		break;

	case'D':
		cout << "Ділення" << endl;
		result = chislo1 / chislo2;
		cout << hex << result << endl;
		break;

	default:
		cout << "Не вірно введенно тип дії" << endl;
		break;
	}
	system("pause");
}

