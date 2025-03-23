#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    map<int,int>mp;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    //for(auto it : mp)cout<<it.first<<' '<<it.second<<endl;
    for(int i=1;i<=n;i++){
        if(mp[i] == 0){
            cout<<i<<endl;
            break;
        }
    }

}