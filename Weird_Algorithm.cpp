#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>v;
    v.push_back(n);
    while(n!=1){
       if(n%2==1){
         n = 3*n +1;
         v.push_back(n);
       }else{
         n /=2;
         v.push_back(n);
       }
    }
    for(auto u:v)cout<<u<<' ';
    cout<<endl;
}