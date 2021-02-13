#include<bits/stdc++.h>
using namespace std;
#define size_N 1000000
bool prime[size_N];
int twin[size_N];
int sieve(int n)
{
    int i,j,k=0;
    //for(i=2;i<=n;i++)prime[i]=0;
    for(i=4;i<=n;i+=2)prime[i]=1;
    for(i=3;i*i<n+1;i+=2){
        if(prime[i]==0){
            for(j=i*i;j<=n;j+=2*i)prime[j]=1;
        }
    }
    for(i=2;i<=n;i++){
        if(prime[i]==0){
            twin[k++]=i;
        }
    }
    return k;
}
int Divisor(int n)
{
    int i,count,sum=1;
    for(i=0;twin[i]<sqrt(n)+1;i++){
        if(n%twin[i]==0){
            count=0;
            while(n%twin[i]==0){
                n/=twin[i];
                count++;
            }
            sum*=(count+1);
        }
    }
    if(n>1)
        sum=sum*2;
    return sum;
}
int main()
{
    int n;
    while(cin>>n){
             sieve(n);
        printf("%d no of divisor : %d\n",n,Divisor(n));
    }
   return 0;
}
