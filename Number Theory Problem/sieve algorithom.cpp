#include<bits/stdc++.h>
using namespace std;
#define mal 1000000
bool bal[mal];
int prime[mal];
vector<int>v;
void sieve(int n)
{
 int i,j;
 for(i=1;i<=n;i++)bal[i]=true;
 for(i=4;i<=n;i+=2)bal[i]=false;
 for(i=3;i*i<=n;i+=2){
    if(bal[i]==true){
        for(j=i*i;j<=n;j+=2*i)bal[j]=false;

    }
 }
 v.push_back(2);
 for(i=3;i<=n;i+=2){
    if(bal[i]==true)v.push_back(i);
 }
 for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}
