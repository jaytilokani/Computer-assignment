#include <stdio.h>
int main() {
    int s1, s2, s3, total;
    float avg;
    scanf("%d %d %d", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    avg = total / 3.0;
    printf("Total = %d\n", total);
    printf("Average = %.2f", avg);
    return 0;
}