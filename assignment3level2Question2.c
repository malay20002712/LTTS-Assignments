#include <stdio.h>

#define DECIMAL_TO_BCD(decimal) (((decimal / 10) << 4) | (decimal % 10))

int main() {
    int decimal = 0;
    scanf("%d", &decimal);
    unsigned char bcd;

    printf("Decimal: %d\n", decimal);

    bcd = DECIMAL_TO_BCD(decimal);

    printf("BCD: 0x%02X\n", bcd);

    return 0;
}
