﻿// lab15.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	int min = 1;
	int max = 1;
	cout << "введите N";
	cin >> N;
	int* a = new int[N];
	cout << "введите массив";
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i] <= a[min])
		{
			min = i;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i] >= a[max])
		{
			max = i;
		}
	}
	if (min > max)
	{
		for (int i = max + 1; i < min; i++)
		{
			a[i] = 0;
		}
	}
	if (min < max)
	{
		for (int i = min + 1; i < max; i++)
		{
			a[i] = 0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << a[i];
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
