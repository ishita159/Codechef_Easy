#include<stdio.h>
int main()
{
	int a,b,n,z;
	scanf("%d %d",&a,&b);
	if(b>=1 && b<=10000 && a>=1 && a<=10000 && b>a)
	{
	n=b-a;
	z=n%10;
	if(z==9)
	
	n--;
    
	else
	    
	n++;
    
	printf("%d",n);
    }
	return 0;
}
