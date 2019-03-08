#include <iostream>
using namespace std;

int main()
{
    int t, n, m, i;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        int f[n], a[m], b[m], q[m];
        for (i = 0; i < n; i++)
            f[i] = 0;
        for (i = 0; i < m; i++)
            q[i] = -1;
        for (i = 0; i < m; i++)
            scanf("%d%d", &a[i], &b[i]);
        for (i = m - 1; i >= 0; i--)
        {
            if (f[a[i]] == 0 && f[b[i]] == 0)
            {
                q[i] = 1;
                f[a[i]] = 1;
                f[b[i]] = 1;
            }
        }
        for (i = 0; i < m; i++)
        {
            if (q[i] == 1)
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
