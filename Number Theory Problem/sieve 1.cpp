#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool a[1000005];
    int x,i,j,k;
    cin>>x;
    for(i=1;i<x;i++){
        a[i]=true;
    }
  for(j=2;j*j<x;j++){
    if(a[j]==true){
        for(k=j*j;k<x;k+=j){
            a[k]=false;
        }
    }
  }
  for(i=1;i<x;i++){
    if(a[i]==true){
        cout<<i<<" ";
    }
  }
  cout<<endl;
}

