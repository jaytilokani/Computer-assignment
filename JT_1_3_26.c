#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, rem, digits = 0, result = 0;
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        result += pow(rem, digits);
        temp /= 10;
    }
    if(result == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}