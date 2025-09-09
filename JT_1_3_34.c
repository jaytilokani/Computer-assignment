#include <stdio.h>
int main() {
    int n, i, a = 1, b = 1, c;
    scanf("%d", &n);
    if(n >= 1)
        printf("1 ");
    if(n >= 2)
        printf("1 ");
    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}