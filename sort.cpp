#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,n,a[100],i,j,temp,K,l;
	scanf("%d",&T);
	    for(l=0;l<T;l++)
	    {
		scanf("%d",&N);

		
			for(i=0;i<N;i++)
			{
				scanf("%d",&a[i]);
			}
			scanf("%d",&K);
			
	
				n=a[K-1];
			
			sort(a,a+N);
            for(i=0;i<N;i++)
            {
            	if(a[i]==n)
            	{
            		printf("%d\n",i+1);
            		break;
				}
			}
		
	}
	
	return 0;
}


