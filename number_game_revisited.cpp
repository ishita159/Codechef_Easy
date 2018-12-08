#include <stdio.h>
int main()
{
    long int t;
    scanf("%ld", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        if ((n - 1) % 4 == 0)
        {
            printf("ALICE\n");
        }
        else
        {
            printf("BOB\n");
        }
    }
    return 0;
}