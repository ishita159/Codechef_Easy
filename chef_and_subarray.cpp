#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n", &n);
    int a[n], c = 0, i, c1 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            c = 0;
        else
            c++;
        if (c > c1)
            c1 = c;
    }
    printf("%d\n", c1);
    return 0;
}