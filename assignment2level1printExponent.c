#include <stdio.h>

void printExponent(double num) {
    unsigned long long bits = *((unsigned long long*)&num);
    unsigned int exponent = (bits >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%03X\n", exponent);
    
    printf("Exponent in binary: ");
    for (int i = 11; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double number = 123.45;
    
    printf("Number: %f\n", number);
    printExponent(number);
    
    return 0;
}
