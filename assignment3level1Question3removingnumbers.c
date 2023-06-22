#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1000;

    while (divisor >= 1) {
        int digit = num / divisor;
        int remaining = (num % divisor) * 10 + (num / divisor / 10);

        if (remaining > largest) {
            largest = remaining;
        }

        divisor /= 10;
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
