﻿// Lab13_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#define n 10

int main()
{
    setlocale(LC_ALL, "Russian");
  	int Mass[n][n], d = n, k, count = 1, i, j, p;
   	for (p = 0; count <= pow(n, 2); p++)
    {
    
    	for (k = p; k < d; k++)
    		Mass[p][k] = count++;
    
    	for (k = p + 1; k < d - 1; k++)
    		Mass[k][n - (p + 1)] = count++;
    
    	for (k = n - (p + 1); k >= p; k--)
    		Mass[n - (p + 1)][k] = count++;
    
    	for (k = n - (p + 2); k > p; k--)
    		Mass[k][p] = count++;
        d--;
    }
    
    cout << endl;
    for (i = 0; i < n; i++) {
    	for (j = 0; j < n; j++) {
    		cout.width(2);
    		cout << Mass[i][j] << "  ";
    	}
    	cout << endl;
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