#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int n = 0;
	cout << "������� ����� �������: ";
	cin >> n;

	switch (n)
	{
		{
	case 1:
		//1.	�������� ���������, ������� ��������� ����� ����� ����� �� � �� 500 (�������� a �������� � ����������).

		int a, i;
		int sum = 0;
		cout << "������� ��������� �������� �� 1 �� 500: ";
		cin >> a;

		for (int i = a; i <= 500; i++)
		{
			sum += i;
		}
		cout << sum << endl;
		cout << endl;
		break;
		}
		{
	case 2:
		//2.	�������� ���������, ������� ����������� ��� ����� ����� x � y, ����� ���� ��������� � ������� �������� x � ������� y.

		double x, y;
		cout << "������� ������ �����: ";
		cin >> x;
		cout << "������� ������ �����: ";
		cin >> y;
		cout << pow(x, y);
		cout << endl;
		break;
		}
		{
	case 3:
		//3.	����� ������� �������������� ���� ����� ����� �� 1 �� 1000.
		int a;
		int sum = 0;
		int srednee = 0;

		for (int i = 1; i <= 1000; i++)
		{
			sum = sum + i;
			srednee = sum / 1000;
		}
		cout << sum << endl;
		cout << srednee << endl;
		cout << endl;
		break;
		}
		{
	case 4:
		//4.	����� ������������ ���� ����� ����� �� a �� 20(�������� � �������� � ����������)

		int a;
		int p=1;
		cout << "������� ��������� �������� �� 1 �� 20: ";
		cin >> a;

		
		for (int i=a; i <= 20; i++)
		{
			p = p*i;
		}
		cout << p << endl;
		break;
		}
		{
	case 5:
		//5.	�������� ���������, ������� ������� �� ����� ������� ��������� �� k, ��� k � ����� ��������. ��������, ��� 7-�� ��������:
		//7 x 2 = 14
		//7 x 3 = 21
		int k;
		int n;
		cout << "������� �����: ";
		cin >> k;

		for (int i = 1; i <= 10; i++)
		{
			cout << k << "x" << i << "=" << k*i << endl;
		}
		cout << endl;
		break;
		}
	}
}