#include <stdio.h>
#include <math.h>
int checkprime(int n)
{
    int flag = 0;
    if (n == 1 || n == 0)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag++;
                break;
            }
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        int sum = x + y;
        for (int i = 1; 1; i++)
        {
            int prime = x + y + i;
            if (checkprime(prime))
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}
