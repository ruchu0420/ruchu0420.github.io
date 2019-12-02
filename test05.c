#include <stdio.h>

double average(double a, double b)
{
    double sum;
    sum = a + b;
    return sum / 2;
}
int main(void)
{
    double x, y, aver;
    printf("Enter x and y:\n");
    scanf("%1f%1f,&x,&y");

    aver = average(x, y);
    printf("Average is %1f\n", aver);
    return 0;
}
