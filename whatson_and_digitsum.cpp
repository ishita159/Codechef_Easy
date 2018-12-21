#include <stdio.h>
 int sumdig( int n)
{
    int t, sum = 0, rem;
    t = n;
    while (t > 0)
    {
        rem = t % 10;
        sum = sum + rem;
        t = t / 10;
    }
    return sum;
}
 int main(void)
{
    int i, j, k = 0, test, d, n[1000], min = 1000001;
    scanf("%d", &test);
    while (test > 0)
    {
        scanf("%d", &d);
        for (i = d; i < d * 10000; i++)
        {
            if (sumdig(i) == d)
                n[k++] = i + 1;
        }
        for (j = 0; j < k; j++)
        {
            if (sumdig(n[j]) < min)
                min = sumdig(n[j]);
        }
        printf("%d\n", min);
        test--;
    }
    return 0;
}