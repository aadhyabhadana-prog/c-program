#include <stdio.h>

int main() {
    int arr[] = {40, 10, 50, 20, 30}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 20; 
    int foundIndex = -1; 
    int i;

    
    for(i = 0; i < size; i++) {
        if(arr[i] == target) {
            foundIndex = i; 
            break;          
        }
    }

    if(foundIndex != -1) {
        printf("Element %d found at index %d.\n", target, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
