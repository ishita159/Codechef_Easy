#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int count = 0;
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, n, i;
        scanf("%d%d", &m, &n);
        for (i = m; i <= n; i++)
        {
            if (isprime(i))
                printf("%d\n", i);
        }
        printf("\n");
    }
    return 0;
}