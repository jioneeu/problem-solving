#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int temp = n;
    int count = 0;

    do
    {
        if (temp < 10)
        {
            temp = temp * 10 + temp;
        }
        else
        {
            temp = (temp%10) * 10 + ((temp/10) + (temp%10)) % 10;
        }
        ++count;
    } while(temp != n);

    printf("%d\n", count);

    return 0;
}
