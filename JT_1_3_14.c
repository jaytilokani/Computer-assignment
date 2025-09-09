#include <stdio.h>

int main() {
    int i;
    float num;
    float sum = 0.0;
    float mean;

    printf("Enter 10 numbers:\n");

  
    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num; 
    }

   
    mean = sum / 10.0;

   
    printf("\nSum of the 10 numbers: %.2f\n", sum);
    printf("Mean of the 10 numbers: %.2f\n", mean);

    return 0;
}