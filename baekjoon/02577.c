#include <stdio.h>

int main(void)
{
    int freq[10] = {0};
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    a = a*b*c;

    while(a > 0)
    {
        ++freq[a%10];
        a/=10;
    }

    for (int i=0; i<10; ++i)
    {
        printf("%d\n", freq[i]);
    }
    return 0;
}
