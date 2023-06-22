#include <stdio.h>

int getSmallestDigit(int num) {
    int smallest = 9; // Initialize smallest to the largest possible digit

    while (num != 0) {
        int digit = num % 10;

        if (digit < smallest) {
            smallest = digit;
        }

        num /= 10;
    }

    return smallest;
}

int getLargestDigit(int num) {
    int largest = 0; // Initialize largest to the smallest possible digit

    while (num != 0) {
        int digit = num % 10;

        if (digit > largest) {
            largest = digit;
        }

        num /= 10;
    }

    return largest;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Not Valid\n");
        return 0;
    }

    int num, smallest, largest;
    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);

    smallest = getSmallestDigit(num);
    largest = getLargestDigit(num);

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);

        int smallestDigit = getSmallestDigit(num);
        int largestDigit = getLargestDigit(num);

        if (smallestDigit < smallest) {
            smallest = smallestDigit;
        }

        if (largestDigit > largest) {
            largest = largestDigit;
        }
    }

    if (smallest == 9 || largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
    }

    return 0;
}
