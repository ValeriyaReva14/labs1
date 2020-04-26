// SearchAlgorithmTask.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int Search(int *beginArray, int desiredItem)
{
	const int N = 1000;
	for (int i = 0; i < N; i++) {
		if (beginArray[i] == desiredItem) {
			cout << "Нужное значение элемента есть в массиве" << endl;
			return beginArray[i];
		}
	}
    cout << "Нужное значение элемента не найдено" << endl;
}

int BSearch1(int value, int* mas, int left, int right) {
	bool mark = false;
	int mid;
	while ((left <= right) && (mark != true)) {
		mid = (left + right) / 2;
		if (mas[mid] == value) {
			mark = true;
		} 
		if (mas[mid] > value) {
			right = mid - 1;
		} 
		else {
			left = mid + 1;
		}
	}
	if (mark) {
		cout << "Нужное значение элемента есть в массиве" << endl;
		return mid;
	}
	else {
		cout << "Нужное значение элемента не найдено" << endl;
		return -1;
	}
}

int BSearch2(int array[], int value, int left, int right) { 
	int middle = (left + right) / 2;
	if (array[middle] == value) {
		cout << "Нужное значение элемента есть в массиве" << endl;
		return middle;
	}
	if (middle == left || middle == right) {
		cout << "Нужное значение элемента не найдено" << endl;
		return -1;
	}
	if (array[middle] < value) BSearch2(array, value, middle, right - 1); 
	else BSearch2(array, value, left, middle - 1);
}

void QuickSort(int *mas, int first, int last)
{
	int mid, count;
	mid = mas[(first + last) / 2];
	do
	{
		while (mas[first] < mid) first++;
		while (mas[last] > mid) last--;
		if (first <= last)
		{
			count = mas[first];
			mas[first] = mas[last];
			mas[last] = count;
			first++;
			last--;
		}
	} while (first < last);
	if (first < last) QuickSort(mas, first, last);
	if (first < last) QuickSort(mas, first, last);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 1000;
	int Array[N];
	const int minVal = -1000;
	const int maxVal = 1000;
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		Array[i] = rand() % (maxVal - minVal + 1) + minVal;
		cout << Array[i] << endl;
	}
	clock_t start, end;
	start = clock();
	Search(Array, 873);
	end = clock();
	cout << "Время поиска неотсортированного массива линейным поиском: " << (((double)end - start) / ((double)CLOCKS_PER_SEC)) << endl;
	
	start = clock();
	BSearch1(873, Array, 0, N - 1);
	end = clock();
	cout << "Время поиска неотсортированного массива бинарным поиском: " << (((double)end - start) / ((double)CLOCKS_PER_SEC)) << endl;
	
	QuickSort(Array, 0, N - 1);

	start = clock();
	BSearch2(Array, 255, 0, N - 1);
	end = clock();
	cout << "Время поиска отсортированного массива бинарным поиском: " << (((double)end - start) / ((double)CLOCKS_PER_SEC)) << endl;

	start = clock();
	Search(Array, 873);
	end = clock();
	cout << "Время поиска отсортированного массива линейным поиском: " << (((double)end - start) / ((double)CLOCKS_PER_SEC)) << endl;
}

