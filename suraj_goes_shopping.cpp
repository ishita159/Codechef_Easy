#include <stdio.h>
#include <math.h>

int main()
{
    int t, count = 0;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int c[n + 2], i, j, temp, cost = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &c[i]);
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (c[j] < c[j + 1])
                {
                    temp = c[j + 1];
                    c[j + 1] = c[j];
                    c[j] = temp;
                }
            }
        }
        if (n % 4 == 0)
            temp = n / 4;
        else
        {
            temp = n / 4 + 1;
            c[n] = 0;
        }
        for (i = 0; i < n; i += 4)
        {
            cost += c[i] + c[i + 1];
        }
        printf("%d\n", cost);
    }

    return 0;
}
