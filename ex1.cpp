#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int hours, price;
	double percent;
	cout << "������� ���������� ������������ �����: ", cin >> hours;
	cout << "������� ������ ��������� ������: ", cin >> price;
	cout << "������� % ������: ", cin >> percent;
	double salary, bonus;
	bonus = (hours * price) * (percent / 100);
	salary = (hours * price) + bonus;

	cout << "��������: " << salary;
}