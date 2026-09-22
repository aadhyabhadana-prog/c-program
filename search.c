#include <stdio.h>

int linearSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 45, 32, 98, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 32;
    
    int index = linearSearch(arr, size, element);
    
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}