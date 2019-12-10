#include <stdio.h>
#define LEN 5

int main(void)
{
    int a[LEN], i, max;

    printf("Enter array a:\n");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < LEN; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Max is %d\n", max);

    return 0;
}