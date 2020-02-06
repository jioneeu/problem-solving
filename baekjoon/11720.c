#include <stdio.h>

int main(void)
{
    int n;
    int t = 0;
    scanf("%d", &n);
    while(n--)
    {
        char ch;
        scanf(" %c", &ch);
        t += (ch-'0');
    }

    printf("%d\n", t);
    return 0;
}
