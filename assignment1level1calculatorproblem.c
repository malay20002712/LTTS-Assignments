#include <stdio.h>

int check(char c) {
    
    switch (c) {
    case '+':
    return 1;
      break;
    case '-':
      return 2;
      break;
    case '*':return 3;
      break;
    case '/':return 4;
      break;
  }
    
}

int main() {
    
    int first, second;
    char c;
    
    printf("\nenter the first number: ");
    scanf("%d", &first);
    printf("\nenter the operator: ");
    scanf("%c", &c);
    printf("enter the second number: ");
    scanf("%d", &second);
    
    int choice = check(c);
    int sum = 0;
    switch(choice) {
        
        case 1:
        sum = first + second;
        break;
        case 2:
        sum = first - second;
        break;
        case 3:
        sum = first * second;
        break;
        case 4:
        sum = first / second;
        break;
        
    }
    
    printf("%d", sum);
    
}