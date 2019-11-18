#include <stdio.h>

int main(void)
{
    int n;
    int m = 1;
    int sum = 0;

    printf("Enter n:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        m = i * m;
        sum = sum + m;
    }
    printf("%d", sum);
    return 0;
}