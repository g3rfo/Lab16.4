#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j, k, number = 0;
    int **matrix;
    bool direction = true; //right

    printf("Matrix[M * N]\n");
    printf("Enter M: ");
    scanf_s("%d", &m);
    printf("Enter N: ");
    scanf_s("%d", &n);

    matrix = (int**)malloc(m * sizeof(int *));

    for (i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            number++;
            matrix[i][j] = number;
        }
    }
    
    for (i = 0; i < m; i++) {    
        if (direction == true) {
            for (j = 0; j < n; j++) {
                printf(" %d ", matrix[i][j]);
            }
            direction = false;
        }
        else {
            for (j = n - 1; j >= 0; j--) {
                printf(" %d ", matrix[i][j]);
            }
            direction = true;
        }
        printf("\n");
    }
}
