#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, n, k, flag, l;
    scanf("%d", &t);
    while (t)
    {
        char a[40001], b[40001];
        scanf("%s %s", a, b);
        strcat(a, b);
        int c[30] = {0};
        l = strlen(a);
        for (i = 0; i < l; i++)
        {
            c[a[i] - 97]++;
        }
        scanf("%d", &n);
        flag = 0;
        char ts[80002] = "", ss[80002];
        while (n--)
        {

            scanf("%s", ss);
            strcat(ts, ss);
        }
        for (i = 0; i < strlen(ts); i++)
        {
            k = ts[i] - 97;
            if (c[k] == 0)
            {
                flag = 1;
            }
            else
            {
                c[k]--;
            }
        }
        if (flag)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        t--;
    }
}
