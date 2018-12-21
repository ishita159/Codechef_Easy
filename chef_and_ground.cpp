#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n, m, max = 0;
        scanf("%lld %lld", &n, &m);
        ll a[n], i, sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            sum += a[i];
            if (a[i] > max)
                max = a[i];
        }
        m = m - n * max + sum;
        if (m % n == 0 && m >= 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}