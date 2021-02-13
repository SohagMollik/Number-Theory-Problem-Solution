#include<bits/stdc++.h>
#include<vector>
int a[100000003];
using namespace std;
int sieve(int n)
{
 vector<int>v;
 int i,j,c;
 a[0]=1;
 a[1]=1;
 for(i=4;i<=n;i+=2){
    a[i]=1;
 }
 for(i=3;i*i<=n;i+=2){
        if(a[i]==0){
    for(j=i*i;j<=n;j+=i){
        a[j]=1;
    }
    }
 }
 for(i=2;i<=n;i++){
    if(a[i]==0)
     v.push_back(i);
 }
 c=0;
 for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
 }
 cout<<endl;
 for(i=0;i<v.size();i++){
     if(n%v[i]==0){
            //n/=v[i];
           // c++;
            cout<<v[i]<<" ";
        }
    //if(n==1)break;
 }
// if(n!=1)
    //cout<<c<<endl;
 cout<<endl;
}
int main()
{
 int n,t;
 cin>>t;
 while(t--){
 cin>>n;
 sieve(n);
 }
}
