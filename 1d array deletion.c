#include <stdio.h>

int main() {
    int arr[] = {10, 20, 25, 30, 40, 50}; 
    int size = 6; 
    int position, i;

    
    printf("Original array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    position = 2; 

   
    if (position < 0 || position >= size) {
        printf("Invalid position! Deletion not possible.\n");
        return 1;
    }

    for(i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    size--;

   
    printf("Array after deletion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
