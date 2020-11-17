﻿// Task5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>
#include <ctime>

void outputDoubleArray(int arr[4][4])//вывод массива
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++) {
			cout << arr[j][i] << " ";
		}
		cout << endl << endl;
	}
}

int findSumElHeadDiag(int arr[4][4]) {//метод нахождения среднего арифметическо эелементов ниже главной диагонали матрицы

	int diag = -1;
	int k = 0;
	int arif_niz = 0;
	for (int j = 0; j < 4; j++)//заполнение массива рандомно
	{
		for (int i = 0; i < 4; i++) {
			if (diag + 1 == i) {
				if (i != 3) {
					diag++;
					cout << arr[j][i - 1] << endl;
					arif_niz += arr[j][i - 1];
					break;
				}

			}
		}
	}
	return arif_niz;
}

int main()
{
	setlocale(NULL, "rus");
	srand(time(0));
	int arr[4][4];
	for (int j = 0; j < 4; j++)//заполнение массива рандомно
	{
		for (int i = 0; i < 4; i++) {
			arr[j][i] = -20 + rand() % (20 + 20);
		}
	}

	outputDoubleArray(arr);
	int arif_niz = findSumElHeadDiag(arr);
	cout << "Сумма диагонали равна: " << arif_niz << endl;
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