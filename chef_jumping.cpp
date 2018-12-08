#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    scanf("%lld", &a);
    if (a == 0)
        printf("yes\n");
    else if (a % 6 == 0 || a % 6 == 1 || a % 6 == 3)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
    return 0;
}