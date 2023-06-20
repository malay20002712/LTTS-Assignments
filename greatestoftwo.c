#include <stdio.h>

int findTheGreatest(int a, int b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("%d", findTheGreatest(a, b));
    
}