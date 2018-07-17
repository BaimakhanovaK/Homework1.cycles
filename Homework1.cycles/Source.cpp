#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int n = 0;
	cout << "Введите номер задания: ";
	cin >> n;

	switch (n)
	{
		{
	case 1:
		//1.	Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры).

		int a, i;
		int sum = 0;
		cout << "Введите начальное значение от 1 до 500: ";
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
		//2.	Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x в степени y.

		double x, y;
		cout << "Введите первое число: ";
		cin >> x;
		cout << "Введите второе число: ";
		cin >> y;
		cout << pow(x, y);
		cout << endl;
		break;
		}
		{
	case 3:
		//3.	Найти среднее арифметическое всех целых чисел от 1 до 1000.
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
		//4.	Найти произведение всех целых чисел от a до 20(значение а вводится с клавиатуры)

		int a;
		int p=1;
		cout << "Введите начальное значение от 1 до 20: ";
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
		//5.	Написать программу, которая выводит на экран таблицу умножения на k, где k – номер варианта. Например, для 7-го варианта:
		//7 x 2 = 14
		//7 x 3 = 21
		int k;
		int n;
		cout << "Введите число: ";
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