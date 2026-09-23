#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 20, 40, 20, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 20; 
    int count = 0;
    int i;

    printf("Searching for all occurrences of %d:\n", target);
    
    for(i = 0; i < size; i++) {
        if(arr[i] == target) {
            printf("Found at index: %d\n", i);
            count++;
        }
    }

    if(count > 0) {
        printf("Total matches found: %d\n", count);
    } else {
        printf("Element %d does not exist in the array.\n", target);
    }

    return 0;
}
