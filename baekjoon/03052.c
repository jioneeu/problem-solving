#include <stdio.h>

int main(void)
{
    int uniq[42] = {0};
    int count = 0;
    
    for (int i=0; i<10; ++i)
    {
        int t;
        scanf("%d", &t);
        
        ++uniq[t%42];
    }

    for (int i=0; i<42; ++i)
    {
        if (uniq[i] > 0)
        {
            ++count;
        }
    }
    
    printf("%d\n", count);

    return 0;
}
