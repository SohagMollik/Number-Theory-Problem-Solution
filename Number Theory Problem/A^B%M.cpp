#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Mod(ll a,ll b,ll m)
{
    if(b==0)return (1%m);
        ll x=Mod(a,b/2,m);
         x=(x*x)%m;

    if(b%2==1)
         x=(x*a)%m;
         return x;
}
int main()
{
    ll a,b,m;
    while(cin>>a>>b>>m){
    cout<<Mod(a,b,m)<<endl;
    }
}
