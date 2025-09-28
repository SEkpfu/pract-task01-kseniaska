#include <iostream>
using namespace std;

void inputdata(int& hours, int& price, double& percent)
{
	cout << "Введите количество отработанных часов: ", cin >> hours;
	cout << "Введите ставку почасовой оплаты: ", cin >> price;
	cout << "Введите % премии: ", cin >> percent;
}

void countsalary(int hours, int price, double percent, double &summ, double &tax, double &salary)
{
	summ = hours * price + ((hours * price) * (percent / 100));
	tax = summ * 0.13;
	salary = summ - tax;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int hours, price;
	double percent;

	inputdata(hours, price, percent);

	double summ, tax, salary;
	countsalary(hours, price, percent, summ, tax, salary);

	cout << "Общая заработанная сумма: " << summ << "\n";
	cout << "Сумма подоходного налога: " << tax << "\n";
	cout << "Сумма, получаемая работникам на руки: " << salary << "\n";
}