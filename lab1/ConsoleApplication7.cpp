// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#pragma once
#include <cstdlib>
#include <ctime>
#include "Matrix3x3.cpp"
#include "MatrixXnX.cpp"
#include "unsortedLinkedList.cpp"

using namespace std;




int main()
{
	setlocale(LC_ALL, "Russian");
	Matrix3x3 matrix3;
	matrix3.fillRandomElements(-10, 9);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << matrix3.element(i, j) << " " << "\t" ;
		}
		cout << endl;
	}
	cout <<"Сумма главной диагонали:"<< matrix3.sumPrincipalDiag() << endl;
	cout <<"Сумма побочной диагонали:"<< matrix3.sumSecondaryDiag() << endl;
	cout <<"Произведение главной диагонали:"<< matrix3.productPrincipalDiag() << endl;
	cout <<"Произведение побочной диагонали:"<< matrix3.productSecondaryDiag() << endl;
	cout <<"Сумма элементов в первой строке:"<< matrix3.sumRow(0) << endl;
	cout <<"Максимальный элементв в первом столбце:"<< matrix3.maxColumn(0) << endl;
	cout <<"Минимальный элементв в первом столбце:" << matrix3.minColumn(0) << endl;
	cout <<"Сумма элементов во второй строке:"<< matrix3.sumRow(1) << endl;
	cout <<"Максимальный элементв во втором столбце:" << matrix3.maxColumn(1) << endl;
	cout <<"Минимальный элементв во втором столбце:" << matrix3.minColumn(1) << endl;
	cout <<"Сумма элементов в третьей строке:"<< matrix3.sumRow(2) << endl;
	cout <<"Максимальный элементв в третьем столбце:" << matrix3.maxColumn(2) << endl;
	cout <<"Минимальный элементв в третьем столбце:" << matrix3.minColumn(2) << endl;
	MatrixXnX matrixX(4);
	matrixX.fillRandomElements(-10, 9);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matrixX.element(i, j) << " " << "\t";
		}
		cout << endl;
	}
	cout << "Сумма главной диагонали:" << matrixX.sumPrincipalDiag() << endl;
	cout << "Сумма побочной диагонали:" << matrixX.sumSecondaryDiag() << endl;
	cout << "Произведение главной диагонали:" << matrixX.productPrincipalDiag() << endl;
	cout << "Произведение побочной диагонали:" << matrixX.productSecondaryDiag() << endl;
	cout << "Сумма элементов в первой строке:" << matrixX.sumRow(0) << endl;
	cout << "Максимальный элементв в первом столбце:" << matrixX.maxColumn(0) << endl;
	cout << "Минимальный элементв в первом столбце:" << matrixX.minColumn(0) << endl;
	cout << "Сумма элементов во второй строке:" << matrixX.sumRow(1) << endl;
	cout << "Максимальный элементв во втором столбце:" << matrixX.maxColumn(1) << endl;
	cout << "Минимальный элементв во втором столбце:" << matrixX.minColumn(1) << endl;
	cout << "Сумма элементов в третьей строке:" << matrixX.sumRow(2) << endl;
	cout << "Максимальный элементв в третьем столбце:" << matrixX.maxColumn(2) << endl;
	cout << "Минимальный элементв в третьем столбце:" << matrixX.minColumn(2) << endl;
	matrixX.deleteArr();

	List list;
	list.add('1');
	list.add('2');
	list.add('3');
	list.add('4');
	list.add('4');
	list.add('1');
	list.deleteDublicate();
	list.show();

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
