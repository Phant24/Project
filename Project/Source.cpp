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
	//���������� � 10-����� ������� 
	cout << "������ ����� �����" << endl;
	cin >> hex >> chislo1;
	cout << dec << chislo1 << endl;
	cout << "������ ����� �����" << endl;
	cin >> hex >> chislo2;
	cout << dec << chislo2 << endl;
	//�������� �� �� �������
	cout << "Choose: A-���������, B-��������, C-��������, D-������" << endl; cin >> typ;

	switch (typ)
	{
	case 'A':
		cout << "���������" << endl;
		result = chislo1 + chislo2;		//���������� � 10-����� ������
		cout << hex << result << endl;	 //���������� � 16-���� �������
		break;
	case 'B':
		cout << "³�������" << endl;
		result = chislo1 - chislo2;
		cout << hex << result << endl;
		break;

	case'C':
		cout << "��������" << endl;
		result = chislo1 * chislo2;
		cout << hex << result << endl;
		break;

	case'D':
		cout << "ĳ�����" << endl;
		result = chislo1 / chislo2;
		cout << hex << result << endl;
		break;

	default:
		cout << "�� ���� �������� ��� 䳿" << endl;
		break;
	}
	system("pause");
}

