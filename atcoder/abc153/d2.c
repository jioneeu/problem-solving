#include <stdio.h>
#include <math.h>

int main(void)
{
	long h;
	scanf("%ld", &h);
    h = log(h) / log(2) + 1;
	printf("%ld\n", ((long)1 << h)-1);
	return 0;
}
