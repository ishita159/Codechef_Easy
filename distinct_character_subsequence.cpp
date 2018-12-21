#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100000];
    int t, j, k, l, cnt;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        scanf("%s",c);
        l = strlen(c);
        cnt = l;

        for (k = 0; k < l; k++)
        {
            for (j = k + 1; j < l; j++)
            {
                if (c[k] == '0')
                    break;
                if (c[k] == c[j])
                {
                    c[j] = '0';
                    cnt = cnt - 1;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}