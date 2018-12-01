#include<stdio.h>
int main()
{
	int n, count,i,j,a;
	scanf("%d",&n);
	if(n<=100000)
	{
	while(n>0)
	{
	n--;
	count=0;
	scanf("%d",&a);
	if(a<=1000000000 && a>=1)
	{	
	for(i=5;a/i>=1;i=i*5)
	{
		count=count+(a/i);
	}
	printf("%d",count);
    }
    }
    }
	return 0;
}
