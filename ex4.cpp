#include <iostream>
using namespace std;

void inputdata(int& hours, int& price, double& percent)
{
	cout << "������� ���������� ������������ �����: ", cin >> hours;
	cout << "������� ������ ��������� ������: ", cin >> price;
	cout << "������� % ������: ", cin >> percent;
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

	cout << "����� ������������ �����: " << summ << "\n";
	cout << "����� ����������� ������: " << tax << "\n";
	cout << "�����, ���������� ���������� �� ����: " << salary << "\n";
}