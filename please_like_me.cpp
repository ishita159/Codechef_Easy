#include <bits/stdc++.h>
using namespace std;
 int main()
{
    long long int T;
    scanf("%lld", &T);
    while (T--)
    {
        long long int l, d, s, c, i;
        scanf("%lld%lld%lld%lld", &l, &d, &s, &c);
        for (i = 0; i < d - 1; i++)
        {
            s = s + s * c;
            if (s >= l)
            {
                break;
            }
        }
        if (s >= l)
        {
            printf("ALIVE AND KICKING\n");
        }
        else
        {
            printf("DEAD AND ROTTING\n");
        }
    }
}