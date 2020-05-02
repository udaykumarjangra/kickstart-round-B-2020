#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll x,y;
stack <ll> a;
const ll mod=1e9;
void solve()
{
	x=1;y=1;
	a.push(1);
		for(char c:s)
		{
			if(c=='N') {
			x-=a.top();x%=mod;}
			else if(c=='S') x+=a.top(),x%=mod;
			else if(c=='E') y+=a.top(),y%=mod;
			else if(c=='W') y-=a.top(),y%=mod;
			else if(c==')') a.pop();
			else if(c=='(');
			else a.push(a.top()*(c-'0')%mod);
		}
		if(x<=0) x+=mod;
		if(y<=0) y+=mod;
}
int main()
{
	int t;
	cin>>t;
	for(int tc=1; tc<=t; tc++)
	{	a.empty();
		cin>>s;
		solve();
		cout<<"Case #"<<tc<<": "<<y<<" "<<x<<endl;
	}
}
