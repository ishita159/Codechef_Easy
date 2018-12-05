#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int no_of_items, items_in_1_group, A[100],i,sum1,sum2,difference,l;
       scanf("%d %d",&no_of_items,&items_in_1_group);
       for(i=0;i<no_of_items;i++)
       {
           scanf("%d",&A[i]);
       }
       sort(A,A+no_of_items);
       if(items_in_1_group > no_of_items/2)
       {
           items_in_1_group = no_of_items - items_in_1_group;
       }
       for(i=0;i<items_in_1_group;i++)
       {
           sum1 = sum1 + A[i];
       }
       for(i=items_in_1_group;i<no_of_items;i++)
       {
           sum2 = sum2 + A[i];
       }
       difference = sum2 - sum1;
       l = difference < 0 ? -difference : difference;
       printf("%d\n",l);
   }
   return 0;
}