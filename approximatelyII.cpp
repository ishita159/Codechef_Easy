#include<iostream>
#define ll long long int
#define MAX 1000000007
using namespace std;

int main()
{    ll t;
     
     ll a[MAX],n,k,min,count,temp;

     cin >> t;
     for(int f=0;f<t;f++)
     {   
         cin >> n;
         cin >> k;
         
         for(int i=0;i<n;i++)
         {
             cin >> a[i];
         }
         count = 0;
         min = a[0] + a[1] - k;
         if(min < 0)
            min = -min;
         for(int i=0;i<n;i++)
         {
             for(int j=i+1;j<n;j++)
             {
                 temp = a[i] + a[j] - k;
                
                 if(temp<0)
                 {
temp *= -1;
                 }
                 if(temp <= min)
                 {
                     
                     if(temp == min)
                     {
                         count++;
                     }
                     else
                     {
                         min = temp;
                         count=1;
                     }
                     
                 }
             }
             
         }
          cout << min << " "<< count << endl;
         
     }
     
}

