#include <stdio.h>

int main(void)
{
    int N[1000] = {0};
    int t;
    scanf("%d", &t);

    while (t--)
    {
        double avg = 0.0;
        int students;
        scanf("%d", &students);

        for (int i=0; i<students; ++i)
        {
            scanf("%d", &N[i]);
            avg += N[i];
        }

        avg /= students;

        int passed = 0;
        for (int i=0; i<students; ++i)
        {
            if (N[i] > avg)
            {
                ++passed;
            }
        }

        printf("%.3f%%\n", passed/1.0/students*100.0);
    }
    return 0;
}
