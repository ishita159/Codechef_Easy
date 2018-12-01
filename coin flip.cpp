#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testcase, no_of_games,i;
	scanf("%d",&testcase);
	while(testcase--)
	{
	   	scanf("%d",&no_of_games);
	   	for(i=1;i<=no_of_games;i++)
	   	{
	   		long initial_state, no_of_rounds, end_state;
	   		int count=0;
	   		scanf("%ld %ld %ld",&initial_state,&no_of_rounds,&end_state);
	   		
	   		   	if(no_of_rounds%2==0)
	   		   	   printf("%ld\n",no_of_rounds/2);
	   		   	if(no_of_rounds%2!=0 && initial_state==end_state)
	   		   	   printf("%ld\n",no_of_rounds/2);
	   		   	if(no_of_rounds%2!=0 && initial_state!=end_state)
	   		   	   printf("%ld\n",no_of_rounds/2 + 1);

		    
		}
	}
	return 0;
}
