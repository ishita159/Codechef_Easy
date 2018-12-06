#include<bits/stdc++.h>
using namespace std


int main()
{
    int n, ans = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        float x1, x2, x3, y1, y2, y3, d1, d2, d3;
        scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
        d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        d2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
        d3 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
        if (d1 > d2)
        {
            if (d1 > d3)
            {
                if (d1 == d2 + d3)
                    ans = ans + 1;
            }
            else
            {
                if (d3 == d2 + d1)
                    ans = ans + 1;
            }
        }
        else
        {
            if (d2 > d3)
            {
                if (d2 == d1 + d3)
                    ans = ans + 1;
            }
            else
            {
                if (d3 == d2 + d1)
                    ans = ans + 1;
            }
        }
    }
    printf("%d\n", ans);
}
