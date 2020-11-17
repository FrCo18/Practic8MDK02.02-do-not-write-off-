// Task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>
#include <ctime>

void outputArray(int *arr, int &size)//вывод массива
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

int main()
{
	setlocale(NULL, "rus");
	int size = 8;
	int *arr=new int[size];
	for (int i = 0; i < size; i++) {//заполнение массива рандомно
		arr[i] = -20 + rand() % (20 + 20);
	}
	int minus_count = 1;
	int size_change_arr;
	outputArray(arr, size);
	//push_back(arr, size);
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0 || arr[i] == 0) {
			size_change_arr = size - minus_count;
			int* arr_change = new int[size_change_arr];
			for (int k = 0; k < size - minus_count; k++) {
				if (arr[k] != arr[i]) {
					arr_change[k] = *(arr + k);
				}
			}
			minus_count++;
			delete[] arr;

			arr = arr_change;
		}
	}
	outputArray(arr, size_change_arr);
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
