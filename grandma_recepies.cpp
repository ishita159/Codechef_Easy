#include <iostream>
using namespace std;

int main()
{
    int t, i, j, m, n, f1[27], f2[27], flag, flag1;
    scanf("%d", &t);
    while (t--)
    {
        char a[1001], b[1001];
        for (i = 0; i < 27; i++)
        {
            f1[i] = 0;
            f2[i] = 0;
        }
        scanf(" %s%s", a, b);
        n = strlen(a);
        m = strlen(b);
        for (i = 0; i < n; i++)
            f1[a[i] - 'a']++;
        for (i = 0; i < m; i++)
            f2[b[i] - 'a']++;
        flag = 1;
        for (i = 0; i < 26; i++)
        {
            if (f1[i] != f2[i])
            {
                flag = 0;
                break;
            }
        }
        flag1 = 1;
        for (i = 0; i < 26; i++)
        {
            if (f1[i] == 0 && f2[i] == 0)
                continue;
            if (f1[i] > 0 && f2[i] > 0)
            {
            }
            else
            {
                flag1 = 0;
                break;
            }
        }
        if (flag1 == flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
