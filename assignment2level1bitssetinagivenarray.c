#include <stdio.h>

int countSetBits(int* arr, size_t size) {
    int count = 0;
    
    for (size_t i = 0; i < size; i++) {
        int num = arr[i];
        
        while (num != 0) {
            count += num & 1;  
            num >>= 1;        
        }
    }
    
    return count;
}

int main() {
    int array[] = { 5, 10, 3, 7, 12 };
    size_t size = sizeof(array) / sizeof(array[0]);

    int setBits = countSetBits(array, size);
    printf("Total number of set bits: %d\n", setBits);

    return 0;
}
