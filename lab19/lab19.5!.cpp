﻿// lab19.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int	n, m, i, j, c, min, max, k;
	float sum;
	cout << "Введите m: ";
	cin >> m;
	c = m;
	sum = 0;
	int** A = new int* [m];
	int* A2 = new int[m * 2 - 1];
	for (i = 0; i < m; i++)
		A[i] = new int[m];
	cout << " Введите элементы матрицы: ";
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			cin >> A[i][j];
	for (k = 0; k < m * 2 - 1; k++)
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (i == j + c - 1)
				{
					sum = sum + A[i][j];
				}
			}
		}
		A2[k] = sum;
		sum = 0;
		c = c - 1;
	}
	cout << "Суммы элементов диагоналей: " << endl;
	for (k = 0; k < m * 2 - 1; k++) {
		cout << "Сумма элементов " << k + 1 << "-й диагонали: " << A2[k] << endl;
	}

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
