#include<stdio.h>
int main()
{
 int t,n,m,i,a,temp,k;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&m);
  int p[m];
  for(i=0;i<m;i++)
   scanf("%d",&p[i]);
  scanf("%d",&k);
  n=p[k-1];
  for(i=0;i<m-1;i++)
  {
   for(a=0;a<m-i-1;a++)
   {
    if(p[a]>p[a+1])
    {
     temp=p[a];
     p[a]=p[a+1];
     p[a+1]=temp;
    }
   }
  }
  for(i=0;i<=m;i++)
  {
   if(n==p[i])
     temp=i+1;
  }
   printf("%d\n",temp);
 }

return 0;
}
