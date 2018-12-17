#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, sum = 0, T, N, len, c = 0;
    char str[10000];
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        c = 0;
        sum = 0;
        scanf("%s", str);
        scanf("%d", &N);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (str[j] == 'T')
                c = c + 2;
            else
                c = c + 1;
        }
        for (k = 1; k <= ((12 * N) - c); k++)
        {
            sum = sum + ((12 * N) - k) / c;
        }
        printf("%d\n", sum);
    }
}