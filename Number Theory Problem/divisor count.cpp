#include<bits/stdc++.h>
using namespace std;
#define mac 100000
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
int Number_of_divisor(int n)
{
    int cnt,sum=1,val,i;
    val=sqrt(n)+1;
    for(i=0;i<val;i++){
            cnt=1;
    while(n%prime[i]==0){
        n/=prime[i];
    cnt++;
    }
    sum*=cnt;
}
 if(n>1)sum*=2;
 return sum;
}
int main()
{
    int n;
    while(cin>>n){
        sieve(n);
       cout<<"Number of divisor = "<<Number_of_divisor(n)<<endl;;
    }
}
