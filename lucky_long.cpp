#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[100005];
        scanf("%s", s);
        long long int i = 0, n, count = 0;
        n = strlen(s);
        while (i < n)
        {
            if (s[i] != '4' && s[i] != '7')
                count++;
            i++;
        }
        printf("%llu\n", count);
    }
    return 0;
}