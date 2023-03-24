#include <stdio.h>

int main() {
    int n, i;
    int fib[100];

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}

