#include<bits/stdc++.h>
using namespace std;
bool flag[32775];
//int prime[32775];
vector<int>v1;
vector<int>v2;
vector<int>v3;
int sieve(int n)
{
    int j,i;
    int t=n;
    for(i=4;i<=n;i+=2)flag[i]=1;
    for(i=3;i*i<=n;i+=2){
            if(flag[i]==0){
        for(j=i*i;j<=n;j+=2*i)flag[j]=1;
            }
    }
    v1.push_back(2);
    for(i=3;i<=n;i+=2){
        if(flag[i]==0)
            v1.push_back(i);
    }

  for(i=0;i<v1.size();i++){
        for(j=i+1;j<v1.size();j++){
    if((v1[i]+v1[j])==t){
        v2.push_back(v1[i]);
        v3.push_back(v1[i+1]);
    }
        }
  }
  //cout<<max(v3[0]-v2[0]);
  cout<<v3[0]-v2[0]<<endl;
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    //Find_sol(n);
}

