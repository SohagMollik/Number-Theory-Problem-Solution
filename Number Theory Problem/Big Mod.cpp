#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Big_Mod(ll a,ll b,ll m)
{
    if(b==0) return (1%m);
    ll x=Big_Mod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,m;
        cin>>a>>b>>m;
        cout<<Big_Mod(a,b,m)<<endl;
    }
}
