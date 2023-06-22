#include <stdio.h>

void encodeString(char* str, int shift) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'a' + shift) % 26 + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] - 'A' + shift) % 26 + 'A';
        }
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    int shift = 3;

    printf("Original string: %s\n", str);

    encodeString(str, shift);

    printf("Encoded string: %s\n", str);

    return 0;
}
