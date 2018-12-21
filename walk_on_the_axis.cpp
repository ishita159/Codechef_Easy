#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n, sum, total;
        scanf("%lld", &n);
        total = n * (n + 1) / 2;
        sum = total + n;
        printf("%lld\n", sum);
    }
    return 0;
}