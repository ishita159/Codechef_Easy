#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, k, a, b;
    char s[1001];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        n = strlen(s);
        a = 0;
        for (i = 1; i < n; i++)
        {
            b = s[i] - s[i - 1];
            if (b < 0)
                b = b + 26;
            a = a + b;
        }
        a = a + n + 1;
        b = 11 * n;
        if (a <= b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
