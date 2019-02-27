#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    scanf("%d", &t);
    while (t--)
    {
        int count = 0;
        int n, no;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        int pre = arr[0];
        for (int j = 1; j < n; j++)
        {
            if (arr[j] != pre)
            {
                count++;
            }
            pre = arr[j];
        }
        printf("%d\n", count + 1);
    }
    // your code goes here
    return 0;
}