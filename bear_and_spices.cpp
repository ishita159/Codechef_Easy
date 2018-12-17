#include<bits/stdc++.h>
using namespace std;
void dfs(int, int, int *, int *, int *, int *);
int n, a[50][50], visited[50][50];
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            char tmp;
            scanf("%c", &tmp);
            for (j = 0; j < n; j++)
            {
                scanf("%c", &a[i][j]);
                visited[i][j] = 0;
            }
        }
        fflush(stdin);
        long long int ans = 1;
        int g, b, p, q;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                g = 0;
                b = 0;
                p = 0;
                q = 0;
                if (a[i][j] != '.' && !visited[i][j])
                {
                    dfs(i, j, &g, &b, &p, &q);
                    if (g > 1)
                        ans *= 0;
                    else if (g > 0 && (b > 0 || q > 0 || p > 0))
                        ans *= 0;
                    else if (b > 0 && p > 0)
                        ans *= 0;
                    else if (q == 1 && p == 0 && b == 0 && g == 0)
                        ans = (ans * 3) % 1000000007;
                    else if (b == 0 && p == 0 && g == 0 && q > 1)
                        ans = (ans * 2) % 1000000007;
                }
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}

void dfs(int i, int j, int *g, int *b, int *p, int *q)
{
    if (a[i][j] == '.' || visited[i][j])
        return;
    visited[i][j] = 1;
    if (i > 0)
        dfs(i - 1, j, g, b, p, q);
    if (i < n - 1)
        dfs(i + 1, j, g, b, p, q);
    if (j > 0)
        dfs(i, j - 1, g, b, p, q);
    if (j < n - 1)
        dfs(i, j + 1, g, b, p, q);
    switch (a[i][j])
    {

    case 'G':
        (*g)++;
        break;
    case 'B':
        (*b)++;
        break;
    case 'P':

        (*p)++;
        break;
    case '?':
        (*q)++;
    }
}