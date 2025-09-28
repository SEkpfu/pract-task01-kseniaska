#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int hours, price;
	double percent;
	cout << "Введите количество отработанных часов: ", cin >> hours;
	cout << "Введите ставку почасовой оплаты: ", cin >> price;
	cout << "Введите % премии: ", cin >> percent;
	double salary, bonus;
	bonus = (hours * price) * (percent / 100);
	salary = (hours * price) + bonus;

	cout << "Зарплата: " << salary;
}