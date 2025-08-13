#include "logic.h"

void init(int** matrix, int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			matrix[i][j] = rand() % 11;
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

int count_increasing_number_series(int** matrix, int N, int M) {
	int counter_max_series = 0;
	int counter = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (matrix[i][j] < matrix[i][j + 1]) {
				counter++;
			}
		}

		if (counter > counter_max_series) {
			counter_max_series = counter;
		}
		
		counter = 0;
	}

	return counter_max_series;
}