#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество работников ", cin >> n;
	float* hours = new float[n];
	float* price = new float[n];

	float* salary = new float[n];
	float* tax = new float[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Введите количество часов для работника " << i+1 << ": ", cin >> hours[i];
		cout << "Введите ставку часов для работника " << i+1 << ": ", cin >> price[i];

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
	
	cout << "Номер работника, получившего меньше всех " << minin + 1 << "\n";
	cout << "Работник " << maxin + 1 << " получил максимальную зарплату " << salary[maxin] << "\n";

	int count = 0;
	cout << "Номера работников, получивших более 50000 руб.: " << "\n";
	for (int i = 0; i < n; i++)
	{
		if (salary[i] > 50000)
		{
			cout << i + 1 << " ";
			count++;
		}
	}

	cout << "\n" << "Количество работников, получивших более 50000 руб., составляет " << count << "\n";

	double summtax = 0;
	for (int i = 0; i < n; i++)
		summtax += tax[i];

	cout << "Общая сумма налога, уплаченного всей бригадой составляет " << summtax;

	delete[] hours;
	delete[] price;
	delete[] salary;
	delete[] tax;
}