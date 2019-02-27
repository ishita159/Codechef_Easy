#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, max;
        scanf("%d", &n);
        int i, a[n], b[n];
        for (i = 0; i < n; i++)
            b[i] = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            b[a[i]]++;
        }
        max = 0;
        for (i = 0; i < n; i++)
        {
            if (b[i] >= max)
                max = b[i];
        }
        printf("%d\n", n - max);
    }
    return 0;
}