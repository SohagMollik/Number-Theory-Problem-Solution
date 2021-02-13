#include<bits/stdc++.h>
using namespace std;
#define mac 1000005
#define ll long long
bool flag[mac];
int prime[mac];
int sieve(ll n){
ll i,j,k=0;
for(i=0;i<n;i++)flag[i]=true;
for(i=3;i*i<=n;i+=2){
    if(flag[i]){
        for(j=i*i;j<=n;j+=2*i)flag[j]=false;
    }
}
prime[k]=2;
k=1;
for(i=3;i<=n;i+=2){
    if(flag[i])prime[k++]=i;
}
return k;
}
int divisor_sum(int n)
{
    ll i,sum,p=1,cnt,s;
    for(i=0;i<=sqrt(n)+1;i++){
        if(n%prime[i]==0){
                cnt=1;
            while(n%prime[i]==0){

                n/=prime[i];
                cnt++;
            }
            sum=pow(prime[i],cnt);
            s=(sum-1)/(prime[i]-1);

            p*=s;
        }
    }
    if(n>1){
        sum=(n*n)-1;
        p*=sum/(n-1);
    }
    return p;
}
int main()
{
    ll n;
    cin>>n;
    if(n==2)cout<<"sum = "<<3<<endl;
    else if(n==3)cout<<"sum = "<<4<<endl;
    else if(n==4)cout<<"sum = "<<9<<endl;
    else if(n==5)cout<<"sum = "<<6<<endl;
    else{
    sieve(n);
    cout<<"sum = "<<divisor_sum(n)<<endl;
    }
}
