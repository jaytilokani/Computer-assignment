#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0, mean;
    printf("Enter the number of values (n): ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Please enter a positive number of values.\n");
        return 1; 
    }
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &num);
        sum += num; 
  }
    mean = sum / n;

   
    printf("\nSum of the values = %.2f\n", sum);
    printf("Mean of the values = %.2f\n", mean);

    return 0; 
}