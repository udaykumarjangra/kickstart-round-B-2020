#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,d;
ll a[1005];
bool check(ll mid){
	for(ll i=0; i<n; i++)
	{
		if(mid%a[i]!=0)
		{
			mid+=(a[i]-mid%a[i]);
		}
	}
	return mid<=d;
}
ll solve()
{
	ll lo=0, hi=d;
	while(lo<hi){
		ll mid=(lo+hi+1)/2;
		if(check(mid))
		{
			lo=mid;
		}
		else
		{
			hi=mid-1;
		}
	}
	return lo;
}

int main()
{	
	ll t;
	cin>>t;
	for(ll tc=1; tc<=t; tc++)
	{	
		cin>>n>>d;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
		}
		ll ans=0;
		ans=solve();
		cout<<"Case #"<<tc<<": "<<ans<<endl;
	}
	return 0;
}
