#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define mac 10000000
vector<int>v;
bool flag[mac];
int prime[mac];
int sieve(int n)
{
    int i,j,k=0;
    for(i=4;i<=n;i+=2)flag[i]=1;
    for(i=3;i*i<=n;i+=2){
        if(flag[i]==0){
            for(j=i*i;j<=n;j+=2*i)flag[j]=1;
        }
    }
    prime[k]=2;
    k=1;
    for(i=3;i<=n;i+=2){
        if(flag[i]==0)prime[k++]=i;
    }
    return k;
}
int Prime_factorization(int n)
{
    int val,i;
    val=sqrt(n)+1;
    for(i=0;i<val;i++){
        while(n%prime[i]==0){
            n/=prime[i];
            v.push_back(prime[i]);
        }
    }
    if(n>1)v.push_back(n);
}
int main()
{
  int n,i;
  (cin>>n);
  sieve(n);
  Prime_factorization(n);
  for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

