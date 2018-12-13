#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while (t--)
    {
        int n, sum = 0;
        scanf("%d", &n);
        int a[n], c[100000];
        for (i = 1; i < 100000; i++)
        {
            c[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            c[a[i]]++;
        }
        for (i = 0; i < n; i++)
        {
            if (c[a[i]] > 0)
                sum++;
            c[a[i]] = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}