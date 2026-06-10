#include <stdio.h>

int main() {
    int a, temp, rev = 0;

    scanf("%d", &a);
    temp = a;

    while (a > 0) {
        rev = rev * 10 + a % 10;
        a = a / 10;
    }

    if (temp == rev){
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
    return 0;
}