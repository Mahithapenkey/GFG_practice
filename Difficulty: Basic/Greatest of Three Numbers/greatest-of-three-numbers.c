#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // code here
    (a>b)?((a>c)?printf("%d",a):printf("%d",c)):printf("%d",b);

    return 0;
}