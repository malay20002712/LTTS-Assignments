#include <stdio.h>

void setBit(unsigned char *num, int pos) {
    *num |= (1 << pos);
}

void clearBit(unsigned char *num, int pos) {
    *num &= ~(1 << pos);
}

void toggleBit(unsigned char *num, int pos) {
    *num ^= (1 << pos);
}

int main() {
    unsigned char num = 0x15;
    printf("Original Number: 0x%02X\n", num);

    setBit(&num, 3);
    printf("After Setting Bit 3: 0x%02X\n", num);
    clearBit(&num, 5);
    printf("After Clearing Bit 5: 0x%02X\n", num);

    toggleBit(&num, 2);
    printf("After Toggling Bit 2: 0x%02X\n", num);

    return 0;
}
