#include <stdio.h>

int main() {
    int b, i;

    printf("Enter a number: ");
    scanf("%d", &b);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\b",b, i, b * i);
    }

    return 0;
}