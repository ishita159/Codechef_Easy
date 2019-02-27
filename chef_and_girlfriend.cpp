#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h1, m1, h2, m2;
        int dist;
        scanf("%d:%d", &h1, &m1);
        scanf("%d:%d", &h2, &m2);
        cin >> dist;
        int time1 = 60 * h1 + m1;
        int time2 = 60 * h2 + m2;
        float y = time1 - time2 + dist;
        printf("%.1f ", y);
        float x;
        if (time1 - time2 - 2 * dist >= 0)
            x = (float)(time1 - time2);
        else
        {
            x = (float)(time1 - time2) * 0.5 + dist;
        }
        printf("%.1f\n", x);
    }
    return 0;
}