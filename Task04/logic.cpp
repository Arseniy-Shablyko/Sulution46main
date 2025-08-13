#include "logic.h"

void init(int** matrix, int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			matrix[i][j] = rand() % (10 + 10 + 1) - 10;
		}
	}
}

string print_matrix(int** matrix, int N, int M) {
	string s = "";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

int find_row_negative_number_index(int** matrix, int row, int M) {
	int index = 0;

	for (int i = 0; i < M; i++) {
		if (matrix[row][index] > matrix[row][i]) {
			index = i;
		}
	}

	return index;
}

int find_row_positive_number_index(int** matrix, int row, int M) {
	int index = 0;

	for (int i = 0; i < M; i++) {
		if (matrix[row][index] < matrix[row][i]) {
			index = i;
		}
	}

	return index;
}

int count_sum(int** matrix, int N, int M) {
	int sum = 0;

	for (int i = 0; i < N; i++) {
		int min_index = find_row_negative_number_index(matrix, i, M);
		int max_index = find_row_positive_number_index(matrix, i, M);

		if (min_index > max_index) {
			int temp = min_index;
			min_index = max_index;
			max_index = temp;
		}

		for (int j = min_index + 1; j < max_index; j++) {
			sum += matrix[i][j];
		}
	}

	return sum;
}