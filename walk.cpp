#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, max, pos, ans, i, j;
    scanf("%d", &t);
    for (j = 0; j < t; max = 0, j++)
    {
        scanf("%d", &n);
        int w[n];
        for (i = 0; i < n; i++)
            scanf("%d", &w[i]);
        for (i = 0; i < n; i++)
            if ((w[i] + i) > max)
                max = w[i] + i;
        printf("%d\n", max);
    }
    return 0;
}