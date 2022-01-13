/*
2. В цикле с клавиатуры вводятся 10 целых чисел.
Вычислить процент положительных чисел, процент
отрицательных чисел и процент нулей.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int number{ 0 }, negative_numbers{ 0 }, zeros{ 0 }, positive_numbers{ 0 };
	double amount_of_numbers{ 0 };
	cout << "Введите 10 целых чисел: " << endl;

	do
	{
		cin >> number;

		amount_of_numbers++; // подсчитываем кол-во введенных чисел

		if (number < 0) // считаем отрицательные числа
			negative_numbers++;
		else if (number == 0)
			zeros++; // считаем нули
		else if (number > 0)
			positive_numbers++; // считаем положительные числа
	} while (amount_of_numbers < 10);

	cout << (double)amount_of_numbers / 100 * negative_numbers * 100 << "% отрицательных чисел." << endl;
	cout << (double)amount_of_numbers / 100 * zeros * 100 << "% нулей." << endl;
	cout << (double)amount_of_numbers / 100 * positive_numbers * 100 << "% положительных чисел." << endl;

	return 0;
}