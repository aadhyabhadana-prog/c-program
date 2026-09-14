#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];
    int i, j;
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        mergedArr[size1 + j] = arr2[j];
    }
    printf("Merged Array: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
