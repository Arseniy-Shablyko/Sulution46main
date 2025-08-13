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

int find_row_number(int** matrix, int N, int M) {
	int row_number = 0;
	int counter = 0;

	for (int i = 0; i < N; i++) {
		int row_counter = 0;

		for (int j = 0; j < M; j++) {
			for (int g = 0; g < M; g++) {
				if (matrix[i][g] == matrix[i][j]) {
					row_counter++;
				}

			}

		}
		
		if (row_counter > counter) {
			counter = row_counter;
			row_number = i;
		}
	}

	return row_number;
}