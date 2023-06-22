#include <stdio.h>
#include <stdbool.h>

bool compareBoxes(int* box1, int* box2, size_t size) {
    int count[100] = {0};  
    
    for (size_t i = 0; i < size; i++) {
        count[box1[i]]++;  
        count[box2[i]]--;  
    }

    for (int i = 0; i < 100; i++) {
        if (count[i] != 0) {
            return false;  
        }
    }

    return true;  
}

int main() {
    int n = 0;
    printf("enter the number of boxes: ");
    scanf("%d", &n);
    int box1[n], box2[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &box1[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &box2[i]);
    }
    size_t size = sizeof(box1) / sizeof(box1[0]);

    int result = compareBoxes(box1, box2, size);

    if (result) {
        printf("The boxes have a one-to-one mapping.\n");
    } else {
        printf("The boxes do not have a one-to-one mapping.\n");
    }

    return 0;
}
