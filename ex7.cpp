#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int hours, price;
	double salary, summ;
	summ = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << "Введите количество часов для работника " << i << ": ", cin >> hours;
		cout << "Введите ставку часов для работника " << i << ": ", cin >> price;

		salary = hours * price;
		summ += salary;

		cout << "Заработная плата работника" << i << ": " << salary << "\n";
	}

	double averagesalary = summ / 5;
	cout << "Средняя зарплата в бригаде: " << averagesalary;
}