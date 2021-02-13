#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll ans=5,sum=0;
    while(ans<=n){
        sum+=n/ans;
        ans*=5;
    }
    cout<<sum<<endl;
    }
}
