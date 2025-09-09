#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Digits of the number (from right to left): ");

   
    while (num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num = num / 10; 
    }

    printf("\n"); 

    return 0;
}