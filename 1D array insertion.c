#include <stdio.h>

int main() {
    
    int arr[100] = {10, 20, 30, 40, 50}; 
    int size = 5; 
    int element, position, i;

    
    printf("Original array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    
    element = 25;
    position = 2; 

    
    if (position < 0 || position > size || size >= 100) {
        printf("Invalid position or array is full!\n");
        return 1;
    }

    
    for(i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[position] = element;

    
    size++;

    
    printf("Array after insertion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
