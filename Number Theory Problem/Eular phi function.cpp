#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    for(i=1;i<n;i++){
        if(__gcd(i,n)==1)c++;
    }
    cout<<c<<endl;
}
