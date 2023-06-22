#include <stdio.h>

void printSequence(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void generatePattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printSequence(i);
        printSpaces(2 * (n - i));
        printSequence(i);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    generatePattern(n);

    return 0;
}
