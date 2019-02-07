#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        //int max_so_far=arr[0];
        int min_so_far = arr[0];

        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min_so_far)
                min_so_far = arr[i];

            if (arr[i] - min_so_far > ans)
                ans = arr[i] - min_so_far;
        }
        if (ans == 0)
            printf("UNFIT\n");
        else
            printf("%d\n", ans);
    }
    return 0;
}