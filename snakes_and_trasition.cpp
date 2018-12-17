#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, i, j;
        scanf("%d", &n);
        scanf("%d", &m);
        int a[n][m], bin[n][m];
        int ans = 0, c = 0, max = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
                if (a[i][j] > max)
                    max = a[i][j];
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                bin[i][j] = 0;
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i][j] == max)
                {
                    bin[i][j] = 1;
                    c++;
                }
            }
        }
        while (c < n * m)
        {
            ans++;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (bin[i][j] != 1)
                    {
                        if (i - 1 >= 0 && j - 1 >= 0 && bin[i - 1][j - 1] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }
                        else if (i - 1 >= 0 && bin[i - 1][j] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }
                        else if (i - 1 >= 0 && j + 1 < m & bin[i - 1][j + 1] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }
                        else if (j - 1 >= 0 && i + 1 < n && bin[i + 1][j - 1] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }
                        else if (i + 1 < n && bin[i + 1][j] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }
                        else if (i + 1 < n && j + 1 < m && bin[i + 1][j + 1] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }
                        else if (j - 1 >= 0 && bin[i][j - 1] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }

                        else if (j + 1 < m && bin[i][j + 1] == 1)
                        {
                            c++;
                            bin[i][j] = 2;
                        }
                    }
                }
            }
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (bin[i][j] == 2)
                        bin[i][j] = 1;
                }
            }
        }
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",bin[i][j]);
            }
            printf("\n");
        }*/
        printf("%d\n", ans);
    }
    return 0;
}
