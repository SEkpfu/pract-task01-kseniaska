#include <iostream>
using namespace std;

double min_index(float *a, int n)
{
	int minin = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[minin])
			minin = i;
	}
	return minin;
}

double find_max(float *a, int n)
{
	int maxin = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[maxin])
			maxin = i;
	}
	return maxin;
}

int count_elem(float* a, int n, int x)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > x)
			count++;
	}
	return count;
}

double summ_elem(float* a, int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
		summ += a[i];
	return summ;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���������� ��������� ", cin >> n;
	float* a = new float[n];

	for (int i = 0; i < n; i++)
		cout << "������� ������� ", cin >> a[i];
	
	int minin = min_index(a, n);
	int maxin = find_max(a, n);
		;
	cout << "����� ������������ �������� " << minin + 1 << "\n";
	cout << "������������ ������� = " << a[maxin] << " � ��� ����� " << maxin + 1 << "\n";

	int x;
	cout << "������� �����: ", cin >> x;
	int count = count_elem(a, n, x);
	cout << "���������� ��������� ������ ����� " << x << " ���������� " << count << "\n";

	cout << "����� ��������� ���������� " << summ_elem(a, n);

	delete[] a;
}