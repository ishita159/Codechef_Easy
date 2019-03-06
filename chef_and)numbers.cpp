#i#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long int l;
int sod(ll m)
{
    int sum=0;
    while(m>0)
    {
        sum+=m%10;
        m=m/10;
    }
    return sum;
}


int main() {
	
    ll n;
    cin>>n;
    ll c=0;
    for(int i=n-97;i<=n;i++)
    {
        int k=sod(i);
        int l=sod(k);
        if((k+l+i)==n)
            {c++;
           
    }}
    cout<<c<<endl;
	return 0;
}