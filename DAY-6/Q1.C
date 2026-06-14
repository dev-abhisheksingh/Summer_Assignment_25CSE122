#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary equivalent: ");

    for (int k = i - 1; k >= 0; k--) {
        printf("%d", binary[k]);
    }

    return 0;
}