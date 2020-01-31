#include <stdio.h>

int main(void)
{
    int max = -1;
    int pos = 0;

    for (int i=0; i<9; ++i)
    {
        int t;
        scanf("%d", &t);

        if (t > max)
        {
            max = t;
            pos = i+1;
        }
    }

    printf("%d\n%d\n", max, pos);

    return 0;
}
