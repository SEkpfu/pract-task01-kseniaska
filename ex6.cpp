#include <iostream>
#include <string>
using namespace std;

void inputdata(string& surname, int& hours, int& price, double& percent, int num)
{
	cout << "������ ��������� " << num << "\n";
	cout << "������� ������� ";
	cin >> surname;
	cout << "������� ���������� ������������ �����: ", cin >> hours;
	cout << "������� ������ ��������� ������: ", cin >> price;
	cout << "������� % ������: ", cin >> percent;
}

double countsalary(int hours, int price, double percent, double& tax)
{
	double bonus = (hours * price) * (percent / 100);
	double summ = (hours * price) + bonus;
	tax = summ * 0.13;
	double salary = summ - tax;
	return salary;
}

string shortsurname(string& surname)
{
	string result;
	result += surname[0];
	result += "-";
	result += surname[surname.length() - 1];
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int hours1, price1, hours2, price2;
	double percent1, percent2;
	string surname1, surname2;

	inputdata(surname1, hours1, price1, percent1, 1);
	inputdata(surname2, hours2, price2, percent2, 2);

	double tax1, tax2;

	double finalsalary1 = countsalary(hours1, price1, percent1, tax1);
	double finalsalary2 = countsalary(hours2, price2, percent2, tax2);

	if (finalsalary1 < 1000)
		cout << surname1 << " ������� �� ���� ������ 1000 ���." << "\n";
	if (finalsalary2 < 1000)
		cout << surname2 << " ������� �� ���� ������ 1000 ���." << "\n";

	if (tax1 > 50)
		cout << shortsurname(surname1) << " - ����� ������ 50 ���." << "\n";
	if (tax2 > 50)
		cout << shortsurname(surname2) << " - ����� ������ 50 ���." << "\n";
}