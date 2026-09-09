#include <stdio.h>
#include <stdlib.h>

#define MAX_CAPACITY 100

// Function prototypes
void traverse(int arr[], int size);
int insertElement(int arr[], int size, int element, int position);
int deleteElement(int arr[], int size, int position);

int main() {
    int arr[MAX_CAPACITY] = {10, 20, 30, 40, 50}; 
    int size = 5; 
    int choice, element, position;

    while (1) {
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Traverse (Display) Array\n");
        printf("2. Insert an Element\n");
        printf("3. Delete an Element\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nCurrent array elements: ");
                traverse(arr, size);
                break;

            case 2:
                printf("\nEnter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position (0 to %d): ", size);
                scanf("%d", &position);

                size = insertElement(arr, size, element, position);
                break;

            case 3:
                if (size == 0) {
                    printf("\nError: Array is empty. Nothing to delete.\n");
                    break;
                }
                printf("\nEnter the position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);

                size = deleteElement(arr, size, position);
                break;

            case 4:
                printf("\nExiting program. Goodbye!\n");
                exit(0);

            default:
                printf("\nInvalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}


void traverse(int arr[], int size) {
    if (size == 0) {
        printf("[Empty Array]\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insertElement(int arr[], int size, int element, int position) {
    // Check if array is already full
    if (size >= MAX_CAPACITY) {
        printf("\nError: Array capacity reached. Cannot insert.\n");
        return size;
    }

    if (position < 0 || position > size) {
        printf("\nError: Invalid position! Position must be between 0 and %d.\n", size);
        return size;
    }

    
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[position] = element;
    printf("\nSuccess: Element %d inserted at position %d.\n", element, position);

    
    return size + 1;
}


int deleteElement(int arr[], int size, int position) {
    
    if (position < 0 || position >= size) {
        printf("\nError: Invalid position! Position must be between 0 and %d.\n", size - 1);
        return size;
    }

    int deletedItem = arr[position];

    
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("\nSuccess: Element %d deleted from position %d.\n", deletedItem, position);
    return size - 1;
}
