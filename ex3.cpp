#include <iostream>
using namespace std;

void inputdata(int& hours, int& price, double& percent)
{
	cout << "Введите количество отработанных часов: ", cin >> hours;
	cout << "Введите ставку почасовой оплаты: ", cin >> price;
	cout << "Введите % премии: ", cin >> percent;
}

double counttax(double sum)
{
	return sum * 0.13;
}

double countsalary(int hours, int price, double percent)
{
	double bonus = (hours * price) * (percent / 100);
	double summ = (hours * price) + bonus;
	double salary = summ - counttax(summ);
	return salary;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int hours, price;
	double percent;
	
	inputdata(hours, price, percent);

	double finalsalary = countsalary(hours, price, percent);

	cout << "Зарплата: " << finalsalary;
}