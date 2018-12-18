#include <bits/stdc++.h>
using namespace std;

int c(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    long long int n, l;
    scanf("%lld%lld", &n, &l);
    long long int i, a[n + 10];

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    qsort(a, n, sizeof(long int), c);

    int c = 0;
    for (i = 0; i < n - 1;)
    {

        if (l >= (a[i + 1] - a[i]))
        {
            c++;
            i = i + 2;
        }
        else
            i = i + 1;
    }

    printf("%d", c);
    return 0;
}