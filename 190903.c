#include <stdio.h>
#include <math.h>

int isLeapyear(int x)
{

    if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int i, flag, count = 0;
    for (i = 2000; i <= 2050; i++)
    {
        flag = isLeapyear(i);
        if (flag == 1)
        {
            printf("%5d", i);
            count++;
        }
    }
    printf("%5d", count);
    return 0;
}