﻿// папирп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int i;
	cout << "введите N:";
	cin >> n;
	int* a = new int[n];
	cout << "введите массив";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int amin = 0, amax = 0;
	for (i = 0; i < n; ++i) {
		if (a[amin] > a[i]) {
			amin = i;
		}
		if (a[amax] < a[i]) {
			amax = i;
		}
	}
	if (amax > amin) amax++;

	n++;
	for (i = n - 1; i >= amin; --i) 
		a[i] = a[i - 1];
	a[amin] = 0;

	n++;
	for (i = n - 1; i > amax + 1; --i)
		a[i] = a[i - 1];
	a[amax + 1] = 0;

	for (i = 0; i < n; ++i) {
		cout << a[i];
	}

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
