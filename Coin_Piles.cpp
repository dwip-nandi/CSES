#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        bool is=false;
        if ((a + b) % 3 == 0)
        {
            if (b > a)
                swap(a, b);
            if (a <= (2 * b)) is = true;
        }
        if(is) cout<<"YES"<<endl;
        else
            cout << "NO" << endl;
    }
}