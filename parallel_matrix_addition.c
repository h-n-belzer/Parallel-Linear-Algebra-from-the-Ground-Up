#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int matrix_addition(int A[ROWS][COLUMNS], int B[ROWS][COLUMNS]) {
	int cumulative_sum;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < ROWS; j++) {
			cumulative_sum += A[i][j] + B[i][j];
		}
	}

	return cumulative_sum;
}

int main() {
	int matrix_A[ROWS][COLUMNS] =
	{{1, 0, 2},
	 {6, 1, 4},
	 {3, 5, 9}};

	int matrix_B[ROWS][COLUMNS] =
	{{1, 7, 3},
	 {0, 5, 5},
	 {2, 4, 0}};

	int result = matrix_addition(matrix_A, matrix_B);

	printf("The result of matrix A added to matrix B is %d", result);

	return 0;
}
