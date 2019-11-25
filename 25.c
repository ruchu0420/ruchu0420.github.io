#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            break;
        }
    }

    if (i == n)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }

    return 0;
}