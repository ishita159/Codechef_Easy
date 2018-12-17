#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, j, k, ref, temp1, temp2, cnt, ans;
        int a[60][60];
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        if (n < 3)
        {
            printf("0\n");
            continue;
        }
        else
        {
            int x[i];
            for (i = 1; i <= n; i++)
            {
                x[i] = 1;
            }
            ans = n;
            cnt = 1;
            while (cnt != 0 && ans > 2)
            {
                cnt = 0;
                for (i = 1; i <= n; i++)
                {
                    if (x[i] != 0)
                    {
                        j = 1;
                        while (a[i][j] == 0)
                        {
                            ++j;
                        }
                        ref = a[i][j];
                        temp1 = 0;
                        temp2 = 0;
                        for (k = j; k <= n; k++)
                        {
                            if (a[i][k] != 0)
                            {
                                ++temp1;
                                if (a[i][k] == ref)
                                {
                                    ++temp2;
                                }
                            }
                        }
                        if (temp1 == temp2)
                        {
                            x[i] = 0;
                            ++cnt;
                            --ans;
                            for (j = 1; j <= n; j++)
                            {
                                a[j][i] = 0;
                            }
                        }
                    }
                }
            }
            if (ans < 3)
            {
                printf("0\n");
            }
            else
                printf("%d\n", ans);
        }
    }
}
