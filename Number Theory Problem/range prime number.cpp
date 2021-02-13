#include<bits/stdc++.h>
using namespace std;
#define max 100000
int bal[max];
void Range_prime(int l,int r)
{
    vector<int>v;
    int i,j;
    if(l%2==0){
            for(i=l;i<=r;i++)bal[i]=0;
        for(i=l;i<=r;i+=2)bal[i]=1;
        for(i=l+1;i*i<=r;i+=2){
                if(bal[i]==0){
            for(j=i*i;j<=r;j+=2*i)bal[j]=1;
                }
        }
        if(l==2){
             v.push_back(2);
            for(i=l+1;i<=r;i+=2){
                if(bal[i]==0)
                v.push_back(i);
            }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
        else{
            for(i=l+1;i<=r;i+=2){
                if(bal[i]==0)
                v.push_back(i);
            }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
    }
    else if(l==1){
        for(i=l;i<=r;i++)bal[i]=0;
        for(i=2;i<=r;i+=2)bal[i]=1;
        for(i=3;i*i<=r;i+=2){
            if(bal[i]==0){
                for(j=i*i;j<=r;j+=2*i)bal[j]=1;
            }
        }
        v.push_back(2);
        for(i=3;i<=r;i+=2){
                if(bal[i]==0)
                v.push_back(i);
            }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(i=l;i<=r;i++)bal[i]=0;
        for(i=l+1;i<=r;i+=2)bal[i]=1;
        for(i=l;i*i<=r;i+=2){
            if(bal[i]==0){
                for(j=i*i;j<=r;j+=2*i)bal[j]=1;
            }
        }
        for(i=l;i<=r;i+=2){
                if(bal[i]==0)
                v.push_back(i);
            }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
   int l,r;
   while(cin>>l>>r){
    Range_prime(l,r);
   }
}
