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
		cout << "������� ���������� ����� ��� ��������� " << i << ": ", cin >> hours;
		cout << "������� ������ ����� ��� ��������� " << i << ": ", cin >> price;

		salary = hours * price;
		summ += salary;

		cout << "���������� ����� ���������" << i << ": " << salary << "\n";
	}

	double averagesalary = summ / 5;
	cout << "������� �������� � �������: " << averagesalary;
}