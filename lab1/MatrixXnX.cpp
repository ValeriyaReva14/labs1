
#include "MatrixXnX.h"
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


class MatrixXnX
{
	int **arr;
	int size = 0;
public:
	MatrixXnX(const int iDim) {
		arr = new int*[iDim];
		for (int x = 0; x < iDim; x++)
			arr[x] = new int[iDim];
		for (int i = 0; i < iDim; i++) {
			for (int j = 0; j < iDim; j++) {
				arr[i][j] = (i * size) * 0;
			}
		}
		size = iDim;
	}
	int element(const int i, const int j) const { return arr[i][j]; }

	void setElement(const int i, const int j, const int value) {
		arr[i][j] = value;
	}

	void fillRandomElements(const int minVal, const int maxVal) {
		srand(time(NULL));
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				arr[i][j] = rand() % (maxVal - minVal + 1) + minVal;
			}
		}
	}

	int sumPrincipalDiag() const {
		int principal = 0;
		for (int i = 0; i < size; i++) {
			principal += arr[i][i];
		}
		return principal;
	}

	int sumSecondaryDiag() const {
		int secondary = 0;
		for (int i = 0; i < size; i++) {
			secondary += arr[i][size - 1 - i];
		}
		return secondary;
	}

	int productPrincipalDiag() const {
		int princ = 1;
		for (int i = 0; i < size; i++) {
			princ *= arr[i][i];
		}
		return princ;
	}

	int productSecondaryDiag() const {
		int second = 1;
		for (int i = 0; i < size; i++) {
			second *= arr[i][size - 1 - i];
		}
		return second;
	}

	int sumRow(const int iRow) const {
		int row = 0;
		for (int i = 0; i < size; i++) {
			row += arr[iRow][i];
		}
		return row;
	}

	int minColumn(const int iCol) const {
		int min = INT32_MAX;
		for (int i = 0; i < size; i++) {
			 min = arr[i][iCol] < min ? arr[i][iCol] : min;
		}
		return min;
	}

	int maxColumn(const int iCol) const {
		int max = INT32_MIN;
		for (int i = 0; i < size; i++) {
			 max = arr[i][iCol] > max ? arr[i][iCol] : max;
		}
		return max;
	}

	void deleteArr() {
		delete[] arr;
		arr = nullptr;
	}
};
