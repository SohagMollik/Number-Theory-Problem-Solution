#include<bits/stdc++.h>
using namespace std;
#define mac 32000
vector<int>v;
void sieve(int r)
{
    bool isPrime[mac];
    int i,j;
    for(i=0;i<r;i++)isPrime[i]=true;
    for(i=3;i*i<=r;i+=2){
        if(isPrime[i]){
            for(j=i*i;j<=r;j+=2*i)isPrime[j]=false;
        }
    }
    v.push_back(2);
    for(i=3;i<=r;i+=2){
        if(isPrime[i])v.push_back(i);
    }
}
void segSieve(int l, int r)
{
    bool isPrime[r-l+1];
    int i,j;
    for(i=0;i<r-l+1;i++)isPrime[i]=true;
    if(l==1)isPrime[0]=false;
    for(i=0;v[i]*v[i]<=r;i++){
        int cp=v[i];
        int base=(l/cp)*cp;
        if(l>base)base+=cp;
        for(j=base;j<=r;j+=cp){
            isPrime[j-l]=false;
        }
        if(base==cp)isPrime[base-l]=true;
    }

    for(i=0;i<r-l+1;i++){
            if(isPrime[i])
        cout<<i+l<<" ";
    }
    cout<<endl;

}
int main()
{
    int l,r,t;
    cin>>t;

    while(t--){
        cin>>l>>r;
        sieve(r);
        segSieve(l,r);
    }

}
