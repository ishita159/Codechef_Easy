#include <stdio.h>
int main()
{
    int n;
    scanf("%lld", &n);
    while (n != 0)
    {
        long long int a[n];
        long long int i, j, k, swap, s;
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = swap;
                }
            }
        }
        s = 0;
        for (i = 0; i < n - 2; i++)
            for (j = i + 1; j < n - 1; j++)
            {
                if ((a[i] + a[j]) < a[n - 1])
                    for (k = j + 1; k < n; k++)
                        if ((a[i] + a[j]) < a[k])
                        {
                            s = s + (n - k);
                            break;
                        }
            }
        printf("%d\n", s);
        scanf("%d", &n);
    }
    return 0;
}