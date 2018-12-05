#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char feedback[100000];
        int len, i,count=0;
        scanf("%s",&feedback);
        len = strlen(feedback);
        for(i=0;i<len-2;i++)
        {
            if((feedback[i]=='0' && feedback[i+1]=='1' && feedback[i+2]=='0') || (feedback[i]=='1' && feedback[i+1]=='0' && feedback[i+2]=='1'))
            {
                count++;
                break;
            }
        }
        if(count==1)
        {
            printf("Good");
        }
        else {
           printf("Bad");
        }
    }
    return 0;
}