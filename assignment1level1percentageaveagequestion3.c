#include <stdio.h>
int main() {
    
    int n = 30;
    char name[n];
    fgets(name, n, stdin);
    int subject [3];
    int i;
    for (i = 0; i < 3; i++) {
        scanf("%d", &subject[i]);
    }
    float total = 0;
    for (i = 0; i < 3; i++) {
        total += subject[i];
    }
    float percentage = 0;
    percentage = (total / 3) * 100;
    
    printf("name: %s, Total : %f, percentage: %f", name, total, percentage);
    
}