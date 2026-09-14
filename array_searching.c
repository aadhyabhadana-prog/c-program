#include <stdio.h>
int searchArray(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}
int main() {
    int myIdArray[] = {105, 203, 450, 122, 678, 321};

    int size = sizeof(myIdArray) / sizeof(myIdArray[0]);
    int targetId = 122; 
    int resultIndex = searchArray(myIdArray, size, targetId);
    if (resultIndex != -1) {
        printf("ID %d found at array index: %d\n", targetId, resultIndex);
        printf("Position in array: %d\n", resultIndex + 1);
    } else {
        printf("ID %d was not found in the array.\n", targetId);
    }
    return 0;
}
