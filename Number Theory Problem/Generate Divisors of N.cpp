#include<bits/stdc++.h>
using namespace std;
#define krishna 1000000
bool flag[krishna];
int prime[krishna];
int sieve(int n)
{
    int i,j,k=0;
    for(i=1;i<=n;i++)flag[i]=true;
    for(i=4;i<=n;i+=2)flag[i]=false;
    for(i=3;i*i<=n;i+=2){
        if(flag[i]==true){
            for(j=i*i;j<=n;j+=2*i)flag[j]=false;
        }
    }
    prime[k]=2;
    k=1;
    for(i=3;i<=n;i+=2){
        if(flag[i]==true)prime[k++]=i;
    }
    return k;
}
int store_prime[100000],frq_prime[100000],store_divisor[100000],ans,s;
void divisor(int n)
{
    int i,val;
    val=sqrt(n)+1;
    s=0;
    for(i=0;i<=val;i++){
        if(n%prime[i]==0){
           int c=0;

           while(n%prime[i]==0){
            n/=prime[i];
            c++;
           }
           store_prime[s]=prime[i];
           frq_prime[s]=c;
           s++;
           val=sqrt(n)+1;
        }
    }
        if(n>1){
            store_prime[s]=n;
            frq_prime[s]=1;
            s++;
        }
}
void Generate(int car,int num){

 if(car==s)
    store_divisor[ans++]=num;
 else{
    int i,val;
    val=1;
    for(i=0;i<=frq_prime[car];i++){
        Generate(car+1,num*val);
        val=val*store_prime[car];
    }
 }
}
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    sieve(n);
    divisor(n);
    ans=0;
    Generate(0,1);
    sort(&store_divisor[0],&store_divisor[ans]);
    for(int i=0;i<s;i++){
        cout<<store_divisor[i]<<" ";
    }
    cout<<endl;
 }
}
