#include<bits/stdc++.h>
using namespace std;
#define mac 1000000
bool flag[mac];
int prime[mac];
int sieve(int n)
{
    int i,j,k=0;
    for(i=0;i<n;i++)flag[i]=true;
    for(i=3;i*i<=n;i+=2){
        if(flag[i]){
            for(j=i*i;j<=n;j+=2*i)flag[j]=false;
        }
    }
   prime[k]=2;
   k=1;
   for(i=3;i<=n;i+=2){
    if(flag[i]){
        prime[k++]=i;
    }
   }
   return k;
}
int count_divisor(int n)
{
    int i,cnt,sum=1;
    for(i=0;i<=sqrt(n)+1;i++){
        if(n%prime[i]==0){
            cnt=1;
            while(n%prime[i]==0){
                n/=prime[i];
                cnt++;
            }
            sum*=cnt;
        }
    }
    if(n>1)sum*=2;
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        sieve(n);
        cout<<count_divisor(n)<<endl;
    }
}
