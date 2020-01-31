#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int max = -1;
    int tot = 0;
    for (int i=0; i<n; ++i)
    {
       int t;
       scanf("%d", &t);
       tot += t;
       if (t > max)
       {
            max = t;
       }
    }

    printf("%.2f\n", ((double)tot/max)/n*100);
    return 0;
}
