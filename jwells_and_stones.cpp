#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        char s1[10000],s2[10000],count=0,i,j,n,m;
        scanf("%s",&s1);
        scanf("%s",&s2);
        n=strlen(s1);
        m=strlen(s2);
        for(i=0;i<m;i++)
        { 
            for(j=0;j<n;j++)
            {
            if(s1[i]==s2[j])
            {
                count++;
                break;
                
            }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
