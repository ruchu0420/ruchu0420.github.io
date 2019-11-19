#include <stdio.h>

int main(void)
{
    int term = 1, n, i;
    double sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term *= i;
        sum += 1.0 / term;
    }
    sum += 1;
    printf("sum=%.5lf\n", sum);
    return 0;
}