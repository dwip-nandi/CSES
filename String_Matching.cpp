/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p,sp;
    cin>>s>>p;
    for(int i=0;i<p.size();i++){
       sp += s[i];
    }
    int c=0;
    if(sp==p)c++;
    for(int i=p.size();i<s.size();i++){
        sp.erase(sp.begin()+0);
        sp.push_back(s[i]);
        if(sp==p)c++;
    }
    cout<<c<<endl;
}*/
// update code for time limite
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p,sp;
    cin>>s>>p;
    int c=0;
    for(int i=0;i<=s.size()-p.size();i++){
        if(p==s.substr(i,p.size()))c++;
    }
    cout<<c<<endl;
}
    */
// kmp algorithom for string matching
#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> lps_array(string p) {
    vector<int> lps(p.size());
    int ind = 0;
    for (int i = 1; i < p.size();) {
        if (p[ind] == p[i]) {
            lps[i] = ind + 1;
            i++;
            ind++;
        } else {
            if (ind != 0) {
                ind = lps[ind - 1];
            } else {
                lps[i] = ind;
                i++;
            }
        }
    }
    return lps;
}

void kmp(string s, string p) {
    vector<int> lps = lps_array(p);
    int i = 0, j = 0, c = 0;

    while (i < s.size()) {
        if (s[i] == p[j]) {
            i++;
            j++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }

        if (j == p.size()) {
            c++;
            j = lps[j - 1]; // Reset j for subsequent matches
        }
    }
    cout << c << endl; 
}

signed main() {
    string s, p;
    cin >> s >> p;
    kmp(s, p); 
}
