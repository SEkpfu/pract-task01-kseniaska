#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int workers = 4;
    const int months = 3;

    int price[workers];
    int hours[workers][months];
    float result[workers][months][2];

    for (int i = 0; i < workers; i++)
        cout << "������� ������ ��� ��������� " << i + 1 << ": ", cin >> price[i];

    for (int i = 0; i < workers; i++)
    {
        for (int j = 0; j < months; j++)
            cout << "���� �� ����� " << j + 1 << " ��������� " << i + 1 << " ���������� ", cin >> hours[i][j];
    }

    for (int i = 0; i < workers; i++)
    {
        for (int j = 0; j < months; j++)
        {
            float salary = hours[i][j] * price[i];
            result[i][j][0] = salary;
            float tax = salary * 0.13;
            result[i][j][1] = tax;
        }
    }

    double summ1 = result[0][1][0] - result[0][1][1];
    cout << "�����, ���������� ������ ���������� �� ���� �� ������ ������, ���������� " << summ1 << "\n";

    double tax3 = 0;
    for (int j = 0; j < months; j++)
        tax3 += result[2][j][1];
    cout << "����� ����� ������� � 3 ��������� ���������� " << tax3 << "\n";

    int max = 0;
    for (int i = 1; i < workers; i++)
    {
        if (result[i][2][0] > result[max][2][0])
            max = i;
    }
    cout << "����� ���������, ������������� ������ ���� � ������� ������, - " << max + 1 << "\n"; // +1

    double summ = 0;
    for (int i = 0; i < workers; i++)
    {
        for (int j = 0; j < months; j++)
            summ += result[i][j][0];
    }
    cout << "����� �����, ������������ ���� �������� �� ���, ���������� " << summ;
}