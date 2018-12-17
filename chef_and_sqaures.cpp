#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i, j, T, K;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &K);
        int array[K][K];
        memset(array, 0, sizeof(array[0][0]) * K * K);
        for (i = 0; i < K; i++)
        {
            for (j = 0; j < K; j++)
            {
                array[i][j] = ((K + 1) / 2 + i + j) % K + 1;
            }
        }

        for (i = 0; i < K; i++)
        {
            printf("\n");
            for (j = 0; j < K; j++)
            {
                printf("%d ", array[i][j]);
            }
        }
    }
    return 0;
}
