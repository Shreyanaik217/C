#include <stdio.h>


int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    char matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf(" %c", &matrix[i][j]);
        }
    }
    int uppercase_sum = 0, lowercase_sum = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(isupper(matrix[i][j])) {
                uppercase_sum += matrix[i][j];
            } else if(islower(matrix[i][j])) {
                lowercase_sum += matrix[i][j];
            }
        }
    }
    printf("Sum of uppercase elements: %d\n", uppercase_sum);
    printf("Sum of lowercase elements: %d\n", lowercase_sum);
    return 0;
}

