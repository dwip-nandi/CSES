#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<string>st;
    sort(s.begin(),s.end());
    st.insert(s);
    while(next_permutation(s.begin(),s.end())){
        st.insert(s);
    }
    cout<<st.size()<<endl;
    for(auto it:st){
        cout<<it<<endl;
    }
}