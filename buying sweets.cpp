#include <bits/c++std.h>
using namespace std;
int main()
{
    int t, no_of_blank_notes, A[10000],B[10000];
    while(t--)
    {
        int sum=0,no_of_sweets;
        for(i=0;i<2;i++)
        {
        scanf("%d",&A[i]);
        }
        no_of_blank_notes=A[0];
        cost_of_sweet_chosen=A[1];
        for(i=0;i<no_of_blank_notes;i++)
        {
            scanf("%d",&B[i]);
            sum=sum+B[i];
        }
        no_of_sweets = sum / cost_of_sweet_chosen;
        if (no_of_sweets > 1)
        {
            printf("%d\n",no_of_sweets);
        }
        else
        {
          printf("-1");  
        }
        
    }
    return 0;
}