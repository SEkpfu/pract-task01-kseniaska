#include <iostream>
using namespace std;

void inputdata(int &hours, int &price, double &percent, int num)
{
	cout << "������ ��������� " << num << "\n";
	cout << "������� ���������� ������������ �����: ", cin >> hours;
	cout << "������� ������ ��������� ������: ", cin >> price;
	cout << "������� % ������: ", cin >> percent;
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
		cout << "������ ��������� 1 ��������." << "\n";
	else if (finalsalary1 < finalsalary2)
		cout << "������ ��������� 2 ��������." << "\n";
	else
		cout << "���������� ���������." << "\n";

	double summ_salary = finalsalary1 + finalsalary2;

	cout << "�����, ������������ ����� ����������� ������ " << summ_salary << "\n";
}