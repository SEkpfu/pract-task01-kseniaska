#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���������� ���������� ", cin >> n;
	float* hours = new float[n];
	float* price = new float[n];

	float* salary = new float[n];
	float* tax = new float[n];

	for (int i = 0; i < n; i++)
	{
		cout << "������� ���������� ����� ��� ��������� " << i+1 << ": ", cin >> hours[i];
		cout << "������� ������ ����� ��� ��������� " << i+1 << ": ", cin >> price[i];

		tax[i] = (hours[i] * price[i]) * 0.13;
		salary[i] = hours[i] * price[i] - tax[i];
	}

	int minin = 0;
	int maxin = 0;
	for (int i = 0; i < n; i++)
	{
		if (salary[i] < salary[minin])
			minin = i;
		if (salary[i] > salary[maxin])
			maxin = i;
	}
	
	cout << "����� ���������, ����������� ������ ���� " << minin + 1 << "\n";
	cout << "�������� " << maxin + 1 << " ������� ������������ �������� " << salary[maxin] << "\n";

	int count = 0;
	cout << "������ ����������, ���������� ����� 50000 ���.: " << "\n";
	for (int i = 0; i < n; i++)
	{
		if (salary[i] > 50000)
		{
			cout << i + 1 << " ";
			count++;
		}
	}

	cout << "\n" << "���������� ����������, ���������� ����� 50000 ���., ���������� " << count << "\n";

	double summtax = 0;
	for (int i = 0; i < n; i++)
		summtax += tax[i];

	cout << "����� ����� ������, ����������� ���� �������� ���������� " << summtax;

	delete[] hours;
	delete[] price;
	delete[] salary;
	delete[] tax;
}