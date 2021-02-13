#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int i,n;
    (cin>>n);
    for(i=1;i<=sqrt(n)+1;i++){
        if(n%i==0){
            if(i==n/i)
            v.push_back(i);
            else{
            v.push_back(i);
            v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
