#include <stdio.h>
int main()
{
    long long a, b, c, i, j, sum, tmp, t, m, n, x, y, z;
    scanf("%lld%lld", &n, &m);
    sum = 2 * n + 1;
    for (i = 0; i < m; i++)
    {
        scanf("%lld", &a);
        if (a < n + 2)
            printf("0\n");
        else
        {
            if (a <= sum)
                printf("%lld\n", a - n - 1);
            else
            {
                tmp = a - (2 * n);
                printf("%lld\n", n - tmp + 1);
            }
        }
    }

    return 0;
}