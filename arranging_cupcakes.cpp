#include<bits/stdc++.h>
using namespace std;
#define SIZE 100000
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,diff,k=0,A[SIZE];
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i*j==n)
                {
                    diff = i-j;
                    if(diff<0)
                    {
                        diff=-diff;
                    }
                    A[k]=diff;
                    k++;
                }
            }
        }
        sort(A,A+k);
        printf("%d\n",A[0]);
    }
    return 0;
}