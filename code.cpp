#include <bits/stdc++.h>
using namespace std;

void fun()
{
    char str[100];
    long long int i, j, n, k, ans, ans2;
    scanf("%lld%lld%lld", &n, &k, &ans);
    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    scanf("%s", str);
    if (k != 0)
    {
        if (strcmp(str, "AND") == 0)
        {
            //for(i=0;i<k;i++)
            //{
            for (j = 0; j < n; j++)
            {
                ans = ans & arr[j];
            }
            // }
        }
        else if (strcmp(str, "OR") == 0)
        {

            //for(i=0;i<k;i++)
            // {
            for (j = 0; j < n; j++)
            {
                ans = ans | arr[j];
            }
            // }
        }
        else
        {

            //for(i=0;i<k;i++)
            //    {
            if (k % 2 != 0)
            {
                for (j = 0; j < n; j++)
                {
                    ans = ans ^ arr[j];
                }
            }
            //}
        }
    }
    printf("%lld\n", ans);
}
int main(void)
{
    // your code goes here

    int t, i;
    scanf("%d", &t);
    while (t--)
    {
        fun();
    }

    return 0;
}
