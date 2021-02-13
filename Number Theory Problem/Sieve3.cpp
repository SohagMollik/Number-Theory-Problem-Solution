#include<bits/stdc++.h>
using namespace std;
#define size_N 1000000
//#define size_P 100000
bool flag[size_N+5];
//int prime[size_P];
int sieve(int n)
{
    vector<int>v;
    int i,j;
    for(i=2;i<=n;i++)flag[i]=true;
    for(i=2;i<=n;i+=2)flag[i]=false;
    for(i=3;i*i<=n;i+=2){
        if(flag[i]==true){
            for(j=2*i;j<=n;j+=i)flag[j]=false;
        }
    }
    v.push_back(2);
    for(i=3;i<=n;i+=2){
        if(flag[i]==true)
            v.push_back(i);
    }
    /*for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    cout<<v.size()<<endl;
    cout<<sqrt(48)<<endl;
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}
