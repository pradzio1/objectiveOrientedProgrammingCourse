#include <iostream>
#include "matrix.h"

matrix::matrix() {
	m = 3;
	n = 3;
	table = new double* [m];
	for (int szt = 0; szt < m; szt++)
		table[szt] = new double[n];
}
matrix::matrix(int width, int heigth) {
	m = width;
	n = heigth;
	table = new double*[m];
	for (int szt = 0; szt < m; szt++)
		table[szt] = new double[n];
}
matrix::matrix(matrix &copyCandidate) {
	m = copyCandidate.m;
	n = copyCandidate.n;
	table = new double*[m];
	for (int szt = 0; szt < m; szt++)
		table[szt] = new double[n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			table[i][j] = copyCandidate.table[i][j];
		}
	}
}
matrix::~matrix() {
	delete[] table;
}
matrix matrix::operator + (matrix &added) {
	if (m == added.m&&n == added.n) {
		matrix result(m, n);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				result.table[i][j] = table[i][j] + added.table[i][j];
		}
		return result;
	}
}
matrix matrix::operator - (matrix &added) {
	if (m == added.m&&n == added.n) {
		matrix result(m, n);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				result.table[i][j] = table[i][j] - added.table[i][j];
		}
		return result;
	}
}
matrix &matrix::operator = (matrix &added) {
	if (m == added.m&&n == added.n) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				table[i][j] =added.table[i][j];
		}
		return *this;
	}
}