#include <stdio.h>
5
int main() {
    int arr[100], n, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // sorting the array using bubble sort
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // finding second smallest element
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[0]) {
            printf("The second smallest element is: %d\n", arr[i]);
            break;
        }
    }
    // finding second largest element
    for (i = n-2; i >= 0; i--) {
        if (arr[i] < arr[n-1]) {
            printf("The second largest element is: %d\n", arr[i]);
            break;
        }
    }
    return 0;
}

