#include <iostream>
using namespace std;

int T, N, W;

int max(int a, int b);

int main(void)
{
    int C, P, i, j;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &N, &W);

        int Gain[N + 1], T[N + 1], dp[N + 1][W + 1];

        for (i = 1; i <= N; i++)
        {
            scanf("%d %d %d", &C, &P, &T[i]);
            Gain[i] = C * P;
        }

        //Initialization
        for (j = 0; j < W + 1; j++)
            dp[0][j] = 0;

        for (i = 1; i < N + 1; i++)
            for (j = 0; j < W + 1; j++)
            {
                if (j >= T[i])
                    dp[i][j] = max(dp[i - 1][j - T[i]] + Gain[i], dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }

        printf("%d\n", dp[N][W]);
    }
    return 0;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}