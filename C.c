#include <stdio.h>

int main(void)
{
    int i, n, a, b, x;
    a = 1;
    b = 1;

    printf("Enter n:\n");
    scanf("%d", &n);

    printf("%d %d", a, b);
    for (i = 3; i <= n; i++)
    {

        x = a + b;
        a = b;
        b = x;

        printf("%d", x);
    }
    printf("\n");
    return 0;
}