#include <stdio.h>

int isVowel(char c) {
    
    switch (c) {
        
        case 'a':
        case 'A':
        case 'E':
        case 'e':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'U':
        case 'u':return 1;
        default: return 0;
        
    }
    
}

int main() {
    
    char c;
    scanf("%c", &c);
    
    if (isVowel(c) == 1) {
        printf("Vowel");
    } else {
        printf("Not Vowel");
    }
    
}