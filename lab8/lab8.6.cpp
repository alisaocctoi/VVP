﻿// lab8.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "введите число";
	cin >> a;
	if (1 <= a && a < 10) {
		if (a % 2 == 0) {
			cout << "однозначное четное число ";
		}
		else {
			cout << "однозначное нечетное число";
		}
	}
	if (10 <= a && a < 100) {
		if (a % 2 == 0) {
			cout << "двузначное четное число ";
		}
		else {
			cout << "двузначное нечетное число";
		}
	}
	if (100 <= a && a < 1000) {
		if (a % 2 == 0) {
			cout << "трехзначное четное число ";
		}
		else {
			cout << "трехзначное нечетное число";
		}
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
