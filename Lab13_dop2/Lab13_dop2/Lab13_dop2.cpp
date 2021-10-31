﻿// Lab13_dop2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Путем перестановки элементов квадратной вещественной матрицы добиться того, чтобы ее максимальный элемент находился в левом верхнем углу, 
//следующий по величине  в позиции (2,2), следующий по величине  в позиции (3,3) и т. д., заполнив таким образом всю главную диагональ.

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	const int N = 100;
	int i, j, m, n, max1 = 0, max2 = 100, k, a, b, c = 0, d = 0;
	int A[N][N], B[N];
	cout << "Введите размер квадратной матрицы n: ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			A[i][j] = rand() % 100;
			cout << setw(4) << A[i][j];
		}
		cout << "\n";
	}
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (A[i][j] > max1&& A[i][j] < max2) { max1 = A[i][j]; a = i; b = j; }
			}
		}
		A[a][b] = A[c][d];
		c++; d++;
		B[k] = max1;
		max2 = max1;
		max1 = 0;
		cout << endl;
	
	}

	for (i = 0, j = 0, k = 0; i < n; k++, j++, i++)
	{
		A[i][j] = B[k];
	}

	cout << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << setw(4) << A[i][j];
		}
		cout << "\n";
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
