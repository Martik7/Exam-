#include <stdlib.h>
#include <fstream>
#include <string>
#include <cstring>
#include <iostream>
#include <clocale>
#include <Windows.h>
const int N = 5;
int arr[N] = {54, -3, 60, 1, 0};
using namespace std;

/*
2.	Написать функцию, 
которая принимает указатель на массив и количество элементов. 
Функция сжимает массив, удаляя из него элементы равные 0. 
Возвращает указатель на новый массив, не содержащий 0.
*/
int function(int *&a, int g)
{
	int c = 0;
	for (size_t i = 0; i < g; i++)
	{
		if (a[i] != 0)
		{
			c++;
		}
	}
	int *tmp;
	tmp = new int[c];
	int y = 0;
	for (size_t i = 0; i < g; i++)
	{
		if (a[i] != 0)
		{
			tmp[y] = a[i];
			y++;
		}
	}
	delete[] a;
	a = tmp;
	return c;
}

bool function2(int a, int g)
{
	int h = g;
	while (g < a)
	{
		if (g - a == 0)
		{
			return true;
		}
		g = g * h;
	}
	return false;
}

struct Animal
{
	string name;
	string clas;
	string klichka;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	//1
	/*
		1.Дана строка. Преобразовать в ней все прописные латинские буквы в
строчные
	*/
	/*char str[30];
	cin.ignore();
	cin.getline(str, 30);
	int s;
	s = strlen(str);
	for (size_t i = 0; i < s; i++)
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}

	}
	cout << str << endl;*/
	//2
	/*
	2.Написать функцию, 
	которая принимает указатель на массив и количество элементов. 
	Функция сжимает массив, удаляя из него элементы равные 0. 
	Возвращает указатель на новый массив, не содержащий 0.
	*/
	/*int g;
	cout << "Сколько чисел?" << endl;
	cin >> g;
	int *a;
	a = new int[g];
	for (size_t i = 0; i <g; i++)
	{
		cout << "Введите число" << endl;
		cin >> a[i];
	}
	int h = func1(a, g);
	for (size_t i = 0; i < h; i++)
	{
		cout << a[i] << endl;
	}*/
	//3
	/*
	3. Дано целое число N (> 1) и набор из N целых чисел. Вывести те
	элементы в наборе, которые меньше своего левого соседа, и количество K
	таких элементов.
	*/
	/*int counter = 0;

	for (int i = 0; i<(N - 1); i++)
	{
	if (arr[i + 1]<arr[i])
	{
	cout << arr[i + 1] << " ";
	counter++;
	}
	}
	cout << endl << "K= " << counter << endl;*/
	//5
	/*
	5.	Дана матрица размера M × N и целое число K (1 ≤ K ≤ N). Вывести
элементы K-го столбца данной матрицы.
	*/
	/*const int m = 4;
	const int n = 5;
	int k = 3;
	int mas[m][n];
	for (int j = 0; j<m; j++)
		for (int i = 0; i<n; i++)
			mas[j][i] = i * j;

	for (int l = 0; l<m; l++)
		cout << mas[k][l] << " ";*/
	//4
	/*
	4.	Описать функцию IsPowerN(K, N) логического типа, возвращающую
TRUE, если целый параметр K (> 0) является степенью числа N (> 1), и
FALSE в противном случае. Дано число N (> 1) и набор из 10 целых по-
ложительных чисел. С помощью функции IsPowerN найти количество степеней числа N в данном наборе.
	*/
	/*int g;
	cout << "какое число?" << endl;
	cin >> g;
	int a[10];
	int c = 0;
	for (size_t i = 0; i <10; i++)
	{
		a[i] = 1 + rand() % 100;
		cout << a[i] << endl;
	}
	cout << "-----------------------" << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << function2(a[i], g) << endl;
	}*/

	/*
	6.	Разработать структуру, которая описывает животное (название, класс, кличка). Создать функции для работы с этой структурой:
	Заполнение объекта
	Вывод на экран данных об объекте
	Функция «Подать голос»
	*/
	/*Animal animal;
	cout << "Введите название: ";
	cin >> animal.name;
	cout << "Введите класс: ";
	cin >> animal.clas;
	cout << "Введите кличку: ";
	cin >> animal.klichka;
	cout << "Название: " << animal.name << "  Класс: " << animal.clas << "  Кличка: " << animal.klichka << endl;
	if (animal.name == "Собака")
	{
		cout << "Гав, Гав!" << endl;
	}
	else if (animal.name == "Кот")
	{
		cout << "Мяу! Мяу!" << endl;
	}
	else if (animal.name == "Утка")
	{
		cout << "Кря-Кря!" << endl;
	}*/
	

	system("pause");
	return 0;
}