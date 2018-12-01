#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test_case;
	scanf("%d",&test_case);
	while(test_case--)
	{
		long no_of_cars,i,count=1;
		int  cars[10000],max;
		scanf("%ld",&no_of_cars);
		for(i=0;i<no_of_cars;i++)
		{
			scanf("%d",&cars[i]);
		}
		
		max=cars[0];
		while(no_of_cars--)
		{
			if(max<=cars[no_of_cars])
			{
				max=cars[no_of_cars];
			}
			else
			    count++;
		}
		printf("%ld\n",count-no_of_cars);
	}
	return 0;
}
