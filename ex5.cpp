#include <iostream>
using namespace std;

void inputdata(int &hours, int &price, double &percent, int num)
{
	cout << "Данные работника " << num << "\n";
	cout << "Введите количество отработанных часов: ", cin >> hours;
	cout << "Введите ставку почасовой оплаты: ", cin >> price;
	cout << "Введите % премии: ", cin >> percent;
}

double countsalary(int hours, int price, double percent)
{
	double bonus = (hours * price) * (percent / 100);
	double summ = (hours * price) + bonus;
	double tax = summ * 0.13;
	double salary = summ - tax;
	return salary;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int hours1, price1, hours2, price2;
	double percent1, percent2;

	inputdata(hours1, price1, percent1, 1);
	inputdata(hours2, price2, percent2, 2);

	double finalsalary1 = countsalary(hours1, price1, percent1);
	double finalsalary2 = countsalary(hours2, price2, percent2);

	if (finalsalary1 > finalsalary2)
		cout << "Больше заработал 1 работник." << "\n";
	else if (finalsalary1 < finalsalary2)
		cout << "Больше заработал 2 работник." << "\n";
	else
		cout << "Заработали одинаково." << "\n";

	double summ_salary = finalsalary1 + finalsalary2;

	cout << "Сумма, заработанная двумя работниками вместе " << summ_salary << "\n";
}