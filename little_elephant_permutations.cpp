#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int no_of_permutations,i,A[100],j,count1=0,count2=0;
        scanf("%d",&no_of_permutations);
        for(i=0;i<no_of_permutations;i++)
        {
            scanf("%d",&A[i]);
        }
        for(i=0;i<no_of_permutations;i++)
        {
            for(j=i;j<no_of_permutations;j++)
            {
              if(A[i]>A[j])
              {
                  count1++;
              }
            }
        }
        for(i=0;i<no_of_permutations-1;i++)
        {
            if(A[i]>A[i+1])
            {
                count2++;
            }
        }
        if(count1==count2)
        {
            printf("YES\n");
        }
        
        else
        {
           printf("NO\n");
        }
        
    }
    return 0;
}