#include <stdio.h>
int swap(int arr[], int n) {
    int i;
    for (i = 0; i < n - 1; i+=2) {
        arr[i] ^= arr[i+1] ^= arr[i] ^= arr[i + 1];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    swap(arr, n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}