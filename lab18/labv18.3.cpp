﻿// labv18.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int arr[20][20], N, M, f = 1, i, j, d = 1, a = 1, c = 0;
	cout << "введите н";
	cin >> N;
	cout << "введите м";
	cin >> M;
	cout << "введите матрицу";
	for (i = 1; i <= M; i++)
	{
	

		for (j = 1; j <= N; j++)
		{
			
			cin >> arr[i][j];
		}

	}
	for (i = 1; i <= M; i++)
	{
		f *= arr[i][1];
	}
	for (j = 2; j <= N; j++)
	{
		for (i = 1; i <= M; i++)
		{
			d *= arr[i][j];
		}
		if (d < f)
		{
			f = d;
			c = j;
		}
	}
	cout << c << " " << f;

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
