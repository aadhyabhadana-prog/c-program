#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int i;
    int sum = 0;


    printf("Traversing and printing array elements:\n");
    for(i = 0; i < size; i++) {
        
        printf("Element at index %d: %d\n", i, arr[i]);
        
    
        sum += arr[i]; 
    }

    
    printf("\nTotal Sum of elements: %d\n", sum);

    return 0;
}
