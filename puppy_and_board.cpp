#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, m, g[10][10];
    scanf("%d", &t);

    g[0][0] = 1;
    g[0][1] = 0;
    g[0][2] = 0;

    g[1][0] = 0;
    g[1][1] = 1;
    g[1][2] = 0;

    g[2][0] = 0;
    g[2][1] = 0;
    g[2][2] = 1;

    g[3][0] = 0;
    g[3][1] = 0;
    g[3][2] = 0;

    for (i = 0; i < t; i++)
    {

        scanf("%d%d", &n, &m);
        if (g[(n - 1) % 4][(m - 1) % 3] == 0)
            printf("Tuzik\n");

        else
            printf("Vanya\n");
    }

    return 0;
}