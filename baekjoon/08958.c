#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int count = 1;
        int score = 0;
        _Bool cont = 0;
        char str[80];
        scanf("%s", str);

        for (int i=0; str[i]; ++i)
        {
            if (str[i] == 'O')
            {
                score += count;
                ++count;
            }
            else
            {
                count = 1;
            }
        }

        printf("%d\n", score);
    }
    return 0;
}
