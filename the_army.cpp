#include <iostream>
using namespace std;

int main()
{
    int t, m, n, p;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &m, &p);
        int sp = p, lp = p;
        while (--m)
        {
            scanf("%d", &p);
            if (p < sp)
                sp = p;
            else if (p > lp)
                lp = p;
        }
        for (int i = 0; i < n; i++)
            printf("%d ", -i + lp > i - sp ? -i + lp : i - sp);
        printf("\n");
    }
    return 0;
}