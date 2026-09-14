```c
#include <stdio.h>

int main() {
    int arr[100], size, choice, element, position;
    int i;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter element to insert: ");
        scanf("%d", &element);

        printf("Enter position (0 to %d): ", size);
        scanf("%d", &position);

        if (position < 0 || position > size) {
            printf("Invalid position.\n");
        } else {
            for (i = size; i > position; i--) {
                arr[i] = arr[i - 1];
            }

            arr[position] = element;
            size++;

            printf("Array after insertion: ");
            for (i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
        }
    }
    else if (choice == 2) {
        if (size == 0) {
            printf("Array is empty.\n");
        } else {
            printf("Enter position to delete (0 to %d): ", size - 1);
            scanf("%d", &position);

            if (position < 0 || position >= size) {
                printf("Invalid position.\n");
            } else {
                for (i = position; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                size--;

                printf("Array after deletion: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
            }
        }
    }
    else if (choice == 3) {
        printf("Array elements: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
```
