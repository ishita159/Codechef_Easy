#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, mid, low, high;
    scanf("%d", &t);
    while (t--)
    {
        int n, ans;
        scanf("%d", &n);
        int arr[n], stack[n], top = -1;
        for (i = 0; i < n; i++)
        {
            scanf("%d", arr + i);
            if (top == -1)
            {
                stack[++top] = arr[i];
                //	printf("%d ",stack[top]);
            }
            else
            {
                ans = -1;
                low = 0;
                high = top;
                while (low <= high && low >= 0)
                {
                    mid = low + (high - low) / 2;
                    if (arr[i] < stack[mid])
                    {
                        high = mid - 1;
                        ans = mid;
                    }
                    else
                        low = mid + 1;
                }
                if (ans == -1)
                {
                    stack[++top] = arr[i];
                    //	printf("%d ",stack[top]);
                }
                else
                {
                    stack[ans] = arr[i];
                    //	printf("%d ",stack[top]);
                }
            }
        }
        printf("%d ", top + 1);
        for (i = 0; i <= top; i++)
            printf("%d ", stack[i]);
        printf("\n");
    }
    return 0;
}
