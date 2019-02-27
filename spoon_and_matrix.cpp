#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n-- > 0)
    {
        int R, C;
        scanf("%d%d", &R, &C);
        char A[1000][1000];
        for (int i = 0; i < R; i++)
        {
            scanf("%s", &A[i]);
            for (int j = 0; j < strlen(A[i]); j++)
            {
                if (A[i][j] < 97)
                {
                    A[i][j] = (A[i][j] - 65) + 97;
                }
            }
        }

        int flag = 0;
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (A[i][j] == 's')
                {
                    if (C - j >= 5)
                    {
                        if ((A[i][j] == 's' && A[i][j + 1] == 'p' && A[i][j + 2] == 'o' && A[i][j + 3] == 'o' && A[i][j + 4] == 'n'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if ((R - i) >= 5)
                    {
                        if ((A[i][j] == 's' && A[i + 1][j] == 'p' && A[i + 2][j] == 'o' && A[i + 3][j] == 'o' && A[i + 4][j] == 'n'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            if (flag == 1)
                break;
        }
        if (flag == 1)
        {
            printf("There is a spoon!\n");
        }
        else
        {
            printf("There is indeed no spoon!\n");
        }
    }
    return 0;
}