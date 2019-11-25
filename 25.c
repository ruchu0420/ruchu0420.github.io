#include <stdio.h>

int main(void)
{
    int i, a, b, c;

    for (i = 100; i <= 999; i++)
    {

        a = i % 10;
        b = (i % 100 - i % 10) / 10;
        c = (i - i % 10 - b * 10) / 100;

        if (i == a * a * a + b * b * b + c * c * c)
        {
            printf("i is %d\n", i);
        }
    }
    return 0;
}