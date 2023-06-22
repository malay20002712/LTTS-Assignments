#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(void* a, void* b) {
    size_t size = sizeof(int);
    char* temp = (char*)malloc(size);

    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    free(temp);
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a: %d, b: %d", a, b);
    swap2(&a, &b);
    printf("\na: %d, b: %d", a, b);
}