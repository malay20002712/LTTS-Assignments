#include <stdio.h>

int sumofarray(int arr[], int n) {
    
    int sum = 0;
    int i;
    for (i = 0; i < n; i = i + 2) {
        sum = sum + arr[i];
    }
    return sum;
    
}

int main() {
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x = sumofarray(arr, n);
    printf("\n%d", x);
}