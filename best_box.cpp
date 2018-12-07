#include <stdio.h>
#include <math.h>

int main()
{
    int test;
    scanf("%d", &test);
    int i, j;
    for (i = 0; i < test; i++)
    {
        double P, S;
        scanf("%lf%lf", &P, &S);
        double b, h, l;
        b = h = (P - sqrt(P * P - 24 * S)) / 12;
        l = P / 4 - 2 * b;
        printf("%.2lf\n", l * b * h);
    }
    return 0;
}