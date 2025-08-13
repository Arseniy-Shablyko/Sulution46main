#include <iostream>
#include <string>
using namespace std;

void init(int** matrix, int N, int M);
string print_matrix(int** matrix, int N, int M);
int find_row_negative_number_index(int** matrix, int row, int M);
int find_row_positive_number_index(int** matrix, int row, int M);
int count_sum(int** matrix, int N, int M);