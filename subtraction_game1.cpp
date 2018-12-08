#include <stdlib.h>
#include <stdio.h>

long int gcd(long int a, long int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int t;
    scanf(" %d", &t);
    while (t--)
    {
        long int n, i, ans;
        scanf(" %ld", &n);
        long int a[n];
        for (i = 0; i < n; i++)
        {
            scanf(" %ld", &a[i]);
        }
        ans = gcd(a[0], a[1]);
        for (i = 2; i < n; i++)
        {
            ans = gcd(ans, a[i]);
        }
        printf("%ld\n", ans);
    }
    return 0;
}