#include <stdio.h>

int main(void)
{
    int n;
    int min=1000001;
    int max = -1000001;

    scanf("%d", &n);

    while(n--)
    {
        int t;
        scanf("%d", &t);

        if (t < min)
        {
            min = t;
        }

        if (t > max)
        {
            max = t;
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}
