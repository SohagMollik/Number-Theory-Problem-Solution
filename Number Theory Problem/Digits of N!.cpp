#include<bits/stdc++.h>
using namespace std;
#define ll long  double
int main()
{
    ll n,i,ans=0,s;
    cin>>n;
    for(i=1;i<=n;i++){
        ans=ans+(log10(i));
    }
    s=floor(ans);
    cout<<s+1<<endl;
}
