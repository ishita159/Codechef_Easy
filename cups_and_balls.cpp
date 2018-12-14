#include<bits.stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, c, q, i = 0;
        scanf("%llu%llu%llu", &n, &c, &q);
        for (i = 0; i < q; i++)
        {
            long long int l, r;
            scanf("%llu%llu", &l, &r);
            if (l <= c && c <= r)
                c = l + r - c;
        }
        printf("%llu\n", c);
    }
    return 0;
}
