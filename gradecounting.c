#include <stdio.h>

void marksCount(int marks) {
    
    if (marks >= 90 && marks <= 100) {
        printf("Grade A");
    } else if (marks >= 75 && marks < 90) {
        printf("Grade B");
    } else if (marks >= 60 && marks < 75) {
        printf("Grade C");
    } else if (marks >= 50 && marks < 59) {
        printf("Grade D");
    } else {
        printf("Fail");
    }
    
}

int main() {
    
    int marks;
    scanf("%d", &marks);
    marksCount(marks);
    
}