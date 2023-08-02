#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr != NULL) {
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }

        printf("Array elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }

        free(arr);
    } else {
        printf("Memory allocation failed.");
    }

    return 0;
}