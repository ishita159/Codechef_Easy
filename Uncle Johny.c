#include<stdio.h>
int main()
{
	int T,N,n,a[100],i,j,temp,K,l;
	scanf("%d",&T);
	if(T<=1000 && T>=1)
	{ 
	    for(l=0;l<T;l++)
	    {
		scanf("%d",&N);
		if(N>=1 && N<=100)
		{
			for(i=0;i<N;i++)
			{
				scanf("%d",&a[i]);
			}
			scanf("%d",&K);
			if(K>=1 && K<=100)
			{
				n=a[K-1];
			}
			for(i=0;i<N;i++)
            {
                for(j=0;j<N-i-1;j++)
                {
                     if(a[j]>a[j+1])
                     {
                         temp=a[j];
                         a[j]=a[j+1];
                        a[j+1]=temp;
                     }
                }
            }
            for(i=0;i<N;i++)
            {
            	if(a[i]==n)
            	{
            		printf("%d",i+1);
            		break;
				}
			}
		}
	}
	}
	return 0;
}
