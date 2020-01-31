#include <stdio.h>

int main(void)
{
    int n, x;
    scanf("%d%d", &n, &x);

    while(n--)
    {
        int t;
        scanf("%d", &t);
        
        if (t < x)
        {
            printf("%d ", t);
        }
    }

    printf("\n");

    return 0;
}
