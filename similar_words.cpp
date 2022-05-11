#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define sp endl

void func()
{
    ll n,m,ans=INT_MAX;
    cin>>n>>m;
    vector<str>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    //for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    for(ll i=0;i<n-1;i++)
    {
        str x=v[i];
        for(ll j=i+1;j<n;j++)
        {
            str y=v[j];
            ll a=0;
            for(ll k=0;k<m;k++)
            {
                a+=abs(x[k]-y[k]);
            }
            ans=min(a,ans);
        }
    }
    cout<<ans<<sp;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        func();
    }
}
