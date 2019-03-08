#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
        int size;
        scanf("%d",&size);
        int a[size];
        for(int i=1;i<=size;i++) 
        {
            a[i]=0;                        
        }
        for(int i=1;i<=size;i++) 
        {
            int num;
            scanf("%d",&num);
            if(num<=size)
            {
                a[num]=num;
            }
        }
        int count=0;
        for(int i=1;i<=size;i++) 
        {
            if(a[i]==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}