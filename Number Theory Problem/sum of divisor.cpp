#include<bits/stdc++.h>
using namespace std;
/*#define mac 100000
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
int Sum_of_divisor(int n)
{
    int i,sum=1,bal,cnt,s;
    bal=sqrt(n)+1;
    for(i=0;i<bal;i++){
            if(n%prime[i]==0){
            cnt=1;
        while(n%prime[i]==0){
            n/=prime[i];
            cnt*=prime[i];
        }
        cnt*=prime[i];
      s=(cnt-1)/(prime[i]-1);
      sum*=s;
    }
    }
    if(n>1){
        cnt=n*n;
        s=(cnt-1)/(n-1);
        sum*=s;

    }
    return sum;
}
int main()
{
    int n;
    while(cin>>n){
    sieve(n);
    cout<<"sum = "<<Sum_of_divisor(n)<<endl;
    }
}*/
#include <math.h>

#define SIZE_N 1000
#define SIZE_P 1000
bool flag[SIZE_N+5];
int primes[SIZE_P+5];
int seive()
{
int i,j,total=0,val;
for(i=2;i<=SIZE_N;i++) flag[i]=1;
val=sqrt(SIZE_N)+1;
for(i=2;i<val;i++)
if(flag[i])
for(j=i;j*i<=SIZE_N;j++)
flag[i*j]=0;
for(i=2;i<=SIZE_N;i++)
if(flag[i])
primes[total++]=i;
return total;
}
int Sum_Of_Divisor(int N)
{
int i,val,count,sum,p,s;
val=sqrt(N)+1;
sum=1;
for(i=0;primes[i]<val;i++)
{
if(N%primes[i]==0)
{
p=1;
while(N%primes[i]==0)
{
N/=primes[i];
p=p*primes[i];
}
p=p*primes[i];
s=(p-1)/(primes[i]-1);
sum=sum*s;
}
}
if(N>1)
{
p=N*N;
s=(p-1)/(N-1);
sum=sum*s;
}
return sum;
}
int main()
{
int total=seive();
int n;
while(scanf("%d",&n)==1)
{
printf("%d Sum of Of divisor:%d\n",n,Sum_Of_Divisor(n));
}
return 0;
}

