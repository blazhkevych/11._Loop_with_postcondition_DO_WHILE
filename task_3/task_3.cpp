/*
3. В цикле с клавиатуры вводятся 10 целых чисел.
Вычислить процент чётных чисел и процент нечётных.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int number{ 0 }, amount_of_numbers{ 0 }, even_number{ 0 }, odd_number{ 0 };

	cout << "Введите 10 целых чисел: " << endl;

	do
	{
		cin >> number;

		amount_of_numbers++; //подсчитываем кол-во введенных чисел

		if (number % 2 == 0) //считаем четные числа
			even_number++;
		else
			odd_number++; //считаем не четные числа
	} while (amount_of_numbers < 10);

	cout << (double)amount_of_numbers / 100 * even_number * 100 << "% четных чисел." << endl;
	cout << (double)amount_of_numbers / 100 * odd_number * 100 << "% не четных чисел." << endl;

	return 0;
}