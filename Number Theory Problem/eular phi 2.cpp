#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mac 1000000
bool siv[mac];
vector<ll>v;
ll sieve(ll n)
{
    ll i,j;
    for(i=1;i<=n;i++)siv[i]=true;

    for(i=4;i<=n;i+=2)siv[i]=false;

    for(i=3;i*i<=n;i+=2){
        if(siv[i]==true){
            for(j=i*i;j<=n;j+=2*i)siv[j]=false;
        }
    }
    v.push_back(2);

    for(i=3;i<=n;i+=2){
        if(siv[i]==true)v.push_back(i);
    }

}
ll Phi(ll n)
{
    ll i,bal,c,mal=1;

    bal=sqrt(n)+1;

    for(i=0;i<=bal;i++){

        if(n%v[i]==0){
            c=0;
            while(n%v[i]==0){
                n/=v[i];
                c++;
            }

            mal*=(pow(v[i],c)-pow(v[i],c-1));
        }

    }
    if(n>1)mal*=(n-1);
    return mal;
}
int main()
{
 int t;
 cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<3)cout<<1<<endl;
    else{
     sieve(n);
     cout<<Phi(n)<<endl;
     }
  }
}
