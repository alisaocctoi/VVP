﻿// lab18.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// н.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int N, M, i, j, tmp, min, max;
	cout << "введите н и м";
	cin >> N >> M;
	min = 0;
	max = 0;
	int** mat = new int* [N];
	for (i = 0; i < N; i++) {
		mat[i] = new int[M];
	}
	cout << "введите матрицу";
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> mat[i][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (mat[i][j] < mat[i][min]) {
				min = j;
			}

			if (mat[i][j] > mat[i][max]) {
				max = j;
			}
		}
		tmp = mat[i][min];
		mat[i][min] = mat[i][max];
		mat[i][max] = tmp;
	}
	cout << "Преобразованная матрица: " << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cout << mat[i][j];
		}
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
