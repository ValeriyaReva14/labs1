#include "Matrix3x3.h"
#include "pch.h"
#include <iostream>
#pragma once
#include <cstdlib>
#include <ctime>
using namespace std;

class Matrix3x3
{
	int arr[3][3];
public:
	Matrix3x3() {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				arr[i][j] = (i * 3) * 0;
			}
		}
	};

	int element(const int i, const int j) const { return arr[i][j]; }

	void setElement(const int i, const int j, const int value) {
		arr[i][j] = value;
	}

	void fillRandomElements(const int minVal, const int maxVal) {
		srand(time(NULL));
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				arr[i][j] = rand() % (maxVal - minVal + 1) + minVal;
			}
		}
	}

	int sumPrincipalDiag() const {
		int principal = 0;
		for (int i = 0; i < 3; i++) {
			principal += arr[i][i];
		}
		return principal;
	}

	int sumSecondaryDiag() const {
		int secondary = 0;
		for (int i = 0; i < 3; i++) {
			secondary += arr[i][2 - i];
		}
		return secondary;
	}

	int productPrincipalDiag() const {
		int princ = 1;
		for (int i = 0; i < 3; i++) {
			princ *= arr[i][i];
		}
		return princ;
	}

	int productSecondaryDiag() const {
		int second = 1;
		for (int i = 0; i < 3; i++) {
			second *= arr[i][2 - i];
		}
		return second;
	}

	int sumRow(const int iRow) const {
		int row = 0;
		for (int i = 0; i < 3; i++) {
			row += arr[iRow][i];
		}
		return row;
	}

	int minColumn(const int iCol) const {
		int min = INT32_MAX;
		for (int i = 0; i < 3; i++) {
			min = arr[i][iCol] < min ? arr[i][iCol] : min;
		}
		return min;
	}

	int maxColumn(const int iCol) const {
		int max = INT32_MIN;
		for (int i = 0; i < 3; i++) {
			max = arr[i][iCol] > max ? arr[i][iCol] : max;
		}
		return max;
	}
};
