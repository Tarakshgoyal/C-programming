#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    x = x % n;
    int temp[n];
    for (int i = 0; i < x; i++) {
        temp[i] = arr[n - x + i];
    }
    for (int i = x; i < n; i++) {
        temp[i] = arr[i - x];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}