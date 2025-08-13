#include "logic.h"

void init(int** matrix, int N, int M) {
	int rand_number = 0;

	for (int i = 0; i < N; i++) {
		rand_number = rand() % 11;

		for (int j = 0; j < M; j++) {
			matrix[i][j] = rand_number + j;
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

int find_max_row_element(int** matrix, int N, int M) {
	int max = 0;

	for (int i = 0; i < N; i++) {
		int max_row_element = 0;
		for (int j = 0; j < M; j++) {
			if (matrix[i][j] > max_row_element) {
				max_row_element = matrix[i][j];
			}
		}

		if (max < max_row_element) {
			max = max_row_element;
		}
	}

	return max;
}