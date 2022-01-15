/*
1. Зациклить программу «Обмен валют», используя цикл с
постусловием.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	enum Currency
	{
		Dollar = 1,
		Euro = 2
	};

	char answer{ 0 };
	int choice{ 0 };
	do
	{
		cout << "Выберите вариант решения задачи: "
			<< "\n1. Решение с использованием if "
			<< "\n2. Решение с использованием switch " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "Введите сумму в гривнах: " << endl;
			double grn{ 0.0 };
			cin >> grn;

			cout << "\nВыберите валюту в которую будет переведена гривна: "
				<< "\n1. Доллары."
				<< "\n2. Евро." << endl;

			int key{ 0 };
			cin >> key;
			cout << endl;

			if (key == Dollar)
				cout << grn << " грн. = " << 0.037 * grn << " дол." << endl;
			else if (key == Euro)
				cout << grn << " грн. = " << 0.033 * grn << " евр." << endl;
		}
		break;

		case 2:
		{
			cout << "Введите сумму в гривнах: " << endl;
			double grn{ 0.0 };
			cin >> grn;

			cout << "\nВыберите валюту в которую будет переведена гривна: "
				<< "\n1. Доллары."
				<< "\n2. Евро." << endl;

			int key{ 0 };
			cin >> key;
			cout << endl;

			switch (key)
			{
			case Dollar:
				cout << grn << " грн. = " << 0.037 * grn << " дол." << endl;
				break;

			case Euro:
				cout << grn << " грн. = " << 0.033 * grn << " евр." << endl;
				break;
			}
		}
		break;

		default:
			cout << "Сделайте корректный выбор !" << endl;
		}

		cout << endl;
		cout << "Вы хотите продолжить ? ( y (да) / n (нет) ) ";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}