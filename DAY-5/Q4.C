#include <stdio.h>

int main() {
    int a, i, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (i = 2; i <= a; i++) {
        while (a % i == 0) {
            largest = i;
            a /= i;
        }
    }

    printf("the number is largest prime factor is %d" ,largest);

    return 0;
}