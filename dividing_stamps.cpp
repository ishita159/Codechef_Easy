#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i;
    long temp,sum=0,sum2=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%ld",&temp);
        sum = sum+temp;
    }
    sum2 = (N * (N+1));
    sum2 = sum2/2; 
    if(sum==sum2)
    {
        printf("YES\n");
    }
    
    else
    {
        printf("NO\n");
    }
    return 0;
}