#include <stdio.h>

// Function to scale matrix elements between 0 and 1
void scaleMatrix(float matrix[][100], int rows, int cols) {
    float max = matrix[0][0];
    float min = matrix[0][0];

    // Find the maximum and minimum values in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    // Scale the matrix elements between 0 and 1
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (matrix[i][j] - min) / (max - min);
        }
    }
}

int main() {
    int m, n;

    // Input matrix size
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Input matrix elements
    float matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    // Scale the matrix
    scaleMatrix(matrix, m, n);

    // Display the scaled matrix
    printf("Scaled Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
