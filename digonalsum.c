#include <stdio.h>

int main() {
    int mat[100][100], n, i, j, sum = 0;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    // calculating the sum of diagonal elements
    for (i = 0; i < n; i++) {
        sum += mat[i][i];
    }
    printf("The sum of diagonal elements is: %d\n", sum);
    return 0;
}

