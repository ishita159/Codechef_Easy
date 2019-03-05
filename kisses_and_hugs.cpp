#include <iostream>
using namespace std;

long long modulo_pow(long long b, long long e)
{

    long long res = 1;
    while (e > 0)
    {
        if (e & 1)
        {
            res = (res * b) % 1000000007;
        }
        b = (b * b) % 1000000007;
        e = e >> 1;
    }
    return res;
}

int main(void)
{

    long long n, t, param;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);
        param = modulo_pow(2, n / 2);
        if (n & 1)
            printf("%lld\n", (2 * (2 * param - 1)) % 1000000007);
        else
            printf("%lld\n", (2 * (param - 1) + param) % 1000000007);
    }
    return 0;
}