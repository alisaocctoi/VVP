﻿// 894894894.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double arr[15][2], p, max = 0;
	int N, p1, p2, p3, j, f;
	cout << "N:";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "a" << i + 1 << ":" << endl;
		cout << "	x:";
		cin >> arr[i][0];
		cout << "	y:";
		cin >> arr[i][1];
	}
	for (int i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			for (f = j + 1; f < N; f++)
			{
				p = 0;
				p += sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
				p += sqrt(pow(arr[i][0] - arr[f][0], 2) + pow(arr[i][1] - arr[f][1], 2));
				p += sqrt(pow(arr[j][0] - arr[f][0], 2) + pow(arr[j][1] - arr[f][1], 2));
				if (p > max)
				{
					p1 = i;
					p2 = j;
					p3 = f;
					max = p;
				}
			}
		}
	}
	cout << "P:" << max << endl;
	cout << "точка A:" << arr[p1][0] << " " << arr[p1][1] << endl;
	cout << "точка B:" << arr[p2][0] << " " << arr[p2][1] << endl;
	cout << "точка C:" << arr[p3][0] << " " << arr[p3][1] << endl;
	system("pause");
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
