#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n;
        scanf("%d", &n);
        int a[n], i, max = 100000, in;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] <= max)
            {
                max = a[i];
                in = i;
            }
        }
        int s = 0;
        for (i = 0; i < n; i++)
        {
            s = s + a[i] - max;
        }
        printf("%d\n", s);
        t--;
    }
    return 0;
}
