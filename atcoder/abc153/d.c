#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    long h;
    scanf("%ld", &h);
    int a = log(h) / log(2) + 1;
    long b = pow(2, a) - 1;
    printf("%ld\n", b);
    return 0;
}
