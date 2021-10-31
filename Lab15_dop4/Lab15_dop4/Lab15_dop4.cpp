﻿// Lab15_dop4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

float func(float x) // функция и ее производная  
{ 
 return 5 * x - 1 + pow(x, 3); 
} 
float f1(float x) 
{ 
 return 3 * pow(x, 2) + 5; 
} 

void main() // 4 метод 
{ 
 float e = 1e-4, a = 1, b = 3, z = 0, h, x = 0, x1 = 0; 
 x = (a + b) / 2; 
 if (func(x) * func(a) <= 0) 
 { 
 b = x; 
 } 
 else 
 { 
 a = x; 
 } 
 while (abs(a - b) > 2 * e) 
 { 
 x = (a + b) / 2; 
 if (func(x) * func(a) <= 0) 
 { 
 b = x; 
 } 
 else 
 { 
 a = x; 
 } 
 } 
 printf("x = %f\n", x); 
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