#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> a)
{   
   int ans=0;
   for(int i=1; i<a.size()-1; i++)
   {
       if(a[i-1]<a[i] && a[i+1]<a[i])
       {
           ans++;
       }
   }
   return ans;
}
int main()
{
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++)
    {
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0; i<n; i++)
        {
            cin>>p[i];
        }
        int ans=solve(p);
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }
}
