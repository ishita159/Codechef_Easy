#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, j;
    char chr;
    char arr[41][51];
    char brr[41];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%c", &chr);
        scanf("%c", &chr);
        scanf("%c", &chr);
        scanf("%c", &chr);
        scanf("%c", &chr);
        scanf("%c", &chr);
        gets(arr[0]);
        for (i = 1; i < n; i++)
        {
            scanf("%c", &chr);
            brr[i - 1] = chr;
            if (chr == 'R')
                scanf("%c", &chr);
            scanf("%c", &chr);
            scanf("%c", &chr);
            scanf("%c", &chr);
            gets(arr[i]);
        }
        printf("Begin");
        puts(arr[n - 1]);
        for (i = n - 2; i >= 0; i--)
        {
            if (brr[i] == 'L')
                printf("Right");
            else
                printf("Left");
            puts(arr[i]);
        }
        printf("\n");
    }
    return 0;
}