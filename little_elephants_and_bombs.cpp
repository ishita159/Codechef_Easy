#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        char a[n];
        scanf("%s", a);
        int c = 0;

        for (i = 1; i < n - 1; i++)
        {
            if (a[i] == '0')
            {
                if (a[i - 1] == '0' && a[i + 1] == '0')
                    c++;
            }
        }
        if (a[0] == '0')
        {
            if (n > 1)
            {
                if (a[1] == '0')
                    c++;
            }
            else
                c++;
        }

        if (a[n - 1] == '0' && a[n - 2] == '0')
            c++;
        printf("%d\n", c);
    }
    return 0;
}