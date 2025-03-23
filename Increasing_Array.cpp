#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int c=0;
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            int d=(v[i-1]-v[i]);
            c += d;
            v[i] += d;
        }
    }
    cout<<c<<endl;
}