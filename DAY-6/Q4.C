#include <stdio.h>

int main() {
    int a, n, result = 1;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result = result * a;
    }

    printf("%d^%d = %d\n", a, n, result);

    return 0;
}