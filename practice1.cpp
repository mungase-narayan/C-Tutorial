#include <stdio.h>

int main() {
    int size, target;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    int found = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }
    
    if (found != -1) {
        printf("Element %d found at index %d\n", target, found);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}