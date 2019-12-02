#include <stdio.h>
int main(void)

{
    int cock, hen, chicken;
    for (cock = 0; cock <= 20; cock++)
        for (hen = 0; hen <= 33; hen++)
            for (chicken = 0; chicken <= 100; chicken++)
            {
                if ((cock + hen + chicken == 100) && (5 * cock + 3 * hen + chicken / 3.0 == 100))
                    printf("cock=%3d,hen=%3d,chicken=%3d\n", cock, hen, chicken);
            }
    return 0;
}