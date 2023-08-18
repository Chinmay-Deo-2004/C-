#include <stdio.h>
#define N 3 // Change N to the size of your matrix

void printMatrix(float matrix[N][N*2]) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<2*N; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matrix[N][N*2];
    float temp;
    int i, j, k;

    // Taking input of matrix
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%f", &matrix[i][j]);
        }
        for(j=N; j<2*N; j++) {
            if(j==i+N) {
                matrix[i][j] = 1.0;
            } else {
                matrix[i][j] = 0.0;
            }
        }
    }

    printf("Matrix:\n");
    printMatrix(matrix);

    // Applying Guassian elimination method
    for(i=0; i<N; i++) {
        if(matrix[i][i] == 0.0) {
            printf("Error: Singular Matrix\n");
            return 1;
        }
        for(j=0; j<N; j++) {
            if(i != j) {
                temp = matrix[j][i] / matrix[i][i];
                for(k=0; k<2*N; k++) {
                    matrix[j][k] -= matrix[i][k] * temp;
                }
            }
        }
    }

    // Reducing to identity matrix
    for(i=0; i<N; i++) {
        temp = matrix[i][i];
        for(j=0; j<2*N; j++) {
            matrix[i][j] = matrix[i][j] / temp;
        }
    }

    printf("Inverse Matrix:\n");
    printMatrix(matrix);

    return 0;
} 