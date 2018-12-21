#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t, dg, ms;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &dg, &ms);
        if (dg % 2 == 0 || ms % 2 == 0)
            printf("Tuzik\n");
        else
            printf("Vanka\n");
    }

    return 0;
}