#include <stdio.h>
#include <math.h>
int main() {
    int n, sq, temp, digits = 0;
    scanf("%d", &n);
    sq = n * n;
    temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    if(sq % (int)pow(10, digits) == n)
        printf("Automorphic Number");
    else
        printf("Not Automorphic Number");
    return 0;
}