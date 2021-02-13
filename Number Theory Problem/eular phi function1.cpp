#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll po(ll a,ll b)
{
    ll ans=1;
    while(b--)ans*=a;
    return ans;
}
ll prime(ll n)
{
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
ll phi(ll n)
{
    ll i,h,f=0,mal=1;
    if(prime[n]==0)mal*=n-1;
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    h=i;
                    f++;
                }
                mal*=(po(h,f-1)*(h-1));
                f=0;
            }
        }
        if(n!=1)mal*=(n-1);
    }
    cout<<mal<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        phi(n);
    }
}
