#include <stdio.h>

int main() {
    int num;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int i;

    printf("Enter 200 integer values:\n");

    
    for (i = 0; i < 200; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &num);

        
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

   
    printf("\n--- Counts ---\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);

    return 0;
}