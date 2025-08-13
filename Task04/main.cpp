#include "logic.h"

int main() {
	int N, M;

	cout << "Input matrix size(N, M): ";
	cin >> N >> M;

	int** matrix = new int* [N];
	for (int i = 0; i < M; i++) {
		matrix[i] = new int[M];
	}

	init(matrix, N, M);
	cout << "Matrix: \n" << print_matrix(matrix, N, M) << endl;

	int sum = count_sum(matrix, N, M);
	cout << "Sum: " << sum << endl;

	return 0;
}