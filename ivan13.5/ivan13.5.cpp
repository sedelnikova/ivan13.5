// ivan13.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров,
//а затем — элементы с четными номерами в порядке убывания номеров.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, s, A, B;
	s = 0;
	cout << "Введите, пожалуйста, кол-во элементов массива (N > 2): ";
	cin >> N;

	int* arr = new int[N];
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (i = 1; i < N; i = i + 2)
	{
		cout << arr[i] << " ";
	}
	if (N % 2 != 0) {
		for (i = N - 1; i >= 0; i = i - 2)
		{
			cout << arr[i] << " ";
		}
	}
	else {
		for (i = N - 2; i >= 0; i = i - 2)
		{
			cout << arr[i] << " ";
		}
	}
	
	return 0;
}
