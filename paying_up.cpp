#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(int a[],int n,int m)
{
	if(m>0 && n==0)
		return false;
	if(m==0)
		return true;
	if(a[n-1]>m)
		return isSubsetSum(a,n-1,m);
	return isSubsetSum(a,n-1,m)||isSubsetSum(a,n-1,m-a[n-1]);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,sum=0;
		cin >> n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		(isSubsetSum(a,n,m))? cout<<"Yes"<<endl:cout<<"No"<<endl;
		}
	return 0;
}