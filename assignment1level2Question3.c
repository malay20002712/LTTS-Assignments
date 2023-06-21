#include <stdio.h>

int check(char c) {
    
    if (c >= 'A' && c <= 'Z') return 1;
    else if (c >= 'a' && c <= 'z') return 2;
    else if (c >= '0' && c <= '9') return 3;
    else if (c >= 32 && c <= 126) return 4;
    else return 5;
    
}

int main() {
    
    char c;
    scanf("%c", &c);
    
    switch(check(c)) {
        
        case 1: printf("Capial Letter Type");break;
        case 2: printf("Small letter type");break;
        case 3: printf("Digit"); break;
        case 4: printf("Printable symbol.");break;
        case 5: printf("Not Printable Symbol"); break;
        default: printf("Invalid Symbol");
        
    }
    
}