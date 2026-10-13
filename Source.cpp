#include <iostream>
#include <Windows.h>
using namespace std;
void zadanie1()

{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	srand(time(0));
	int arr[5];
	cout << "Massive";
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 100;
		cout << " " << arr[i] << " ";
	}
	cout << endl;
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > min) max = arr[i];
	}
	cout << "min:" << min << endl;
	cout << "max:" << max << endl;

}
void zadanie2()
{
	srand(time(0));
	int r, a, b;
	
	cout << "размер";
	cin >> r;
	cout << "от числа";
	cin >> a;
	cout << "до числа";
	cin >> b;

	int arr[10];

	cout << "massiv" << " ";
	for (int i = 0; i < r; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << " " << arr[i] << " ";
	}
	cout << endl;

	int x;
	cout << " введи x";
	cin >> x;

	int sum = 0;
	for (int i = 0; i < r; i++)
	{
		if (arr[i] < x)
		{
			sum = sum + arr[i];
		}
	}
	cout << "итог = " << sum << endl;
}
void zadanie3()
{
	double massive[12];

	cout << "прибыл за 12 мес";
	for (int i = 0; i < 12; i++)
	{
		cout << "месяц";
		cin >> massive[i];
    }

	int start, end;
	cout << "диапозон";
	cin >> start >> end;
	start = start - 1;
	end = end - 1;

	int maxmonth = start;
	int minmonth = start;
	
	for (int i = start; i <= end; i++)
	{
		if (massive[i] > massive[maxmonth])
			maxmonth = i;
		if (massive[i] < massive[minmonth])
			minmonth = 1;
	}

	cout << "макс прибыль" << (maxmonth + 1) << "месяц";
	cout << "мин прибыль" << (minmonth + 1) << "месяц";

}
int main()
{
	zadanie1();
	zadanie2();
	zadanie3();
	return 0;
}


















