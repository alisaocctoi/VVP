﻿// lab14.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int N, q;
	cout << "введите N";
	cin >> N;
	int* arr = new int[N];
	cout << "введите массив";
	for (int i = 0; i <= N; i++) {
		cin >> arr[i];
	}
	for (int i = 2; i <= N; i++) {
		q = arr[i] - arr[i-1];
		if (arr[i] != (arr[0] + (i)* q)) {
			cout << 0;
			break;
		}
		else {
			cout << q;
			break;
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
