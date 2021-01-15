#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define int long long
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int isval(vi &a, int i,int n)
{
	if(i>0 && i<n-1 && a[i]<a[i-1] && a[i]<a[i+1])
	{
		return 1;
	}
	return 0;
}
int ishill(vi &a, int i,int n)
{
	if(i>0 && i<n-1 && a[i]>a[i-1] && a[i]>a[i+1])
	{
		return 1;
	}
	return 0;

}
signed main(void)
{
	iamspeed;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vi a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<int> stat(n,0);
		// stat[n-1]=stat[0]=1;
		int initans=0;
		for(int i=1;i<n-1;i++)
		{
			if(ishill(a,i,n)||isval(a,i,n))
			{
				stat[i]=1;
				initans++;
			}
		}
		int ans=initans;
		for(int i=1;i<n-1;i++)
		{
			int temp=a[i];
			a[i]=a[i-1];
			ans=min(ans, initans-stat[i-1]-stat[i]-stat[i+1]+ishill(a,i,n)+ishill(a,i-1,n)+ishill(a,i+1,n)+isval(a,i,n)+isval(a,i-1,n)+isval(a,i+1,n));
			a[i]=a[i+1];
			ans=min(ans, initans-stat[i-1]-stat[i]-stat[i+1]+ishill(a,i,n)+ishill(a,i-1,n)+ishill(a,i+1,n)+isval(a,i,n)+isval(a,i-1,n)+isval(a,i+1,n));
			a[i]=temp;
		}
		if(ans>=0)
		cout<<ans<<endl;
		else
		{
			cout<<0<<endl;
		}
		
	}
  return 0;
}