#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, sum = 0;
        scanf("%d %d", &n, &x);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        int min = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }

        int a = sum / x;
        int b = (sum - min) / x;

        if (a == b)
            printf("-1\n");
        else
            printf("%d\n", a);
    }
    return 0;
}