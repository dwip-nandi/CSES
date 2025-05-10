#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_map<ll, ll> mp;

        while (k--) {
            ll a, b;
            cin >> a >> b;
            mp[a] += b;
        }
        vector<pair<ll, ll>> pa(mp.begin(), mp.end());
        sort(pa.begin(), pa.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b) {
            return a.second > b.second;
        });

        //for(int i=0;i<pa.size();i++)cout<<pa[i].first<<' '<<pa[i].second;
        ll sum = 0;
        for (int i = 0; i < min(n, (int)pa.size()); i++) {
            sum += pa[i].second;
        }

        cout << sum <<endl;
    }
}


/*#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    unordered_map<int, vector<int>> brand_to_costs;

    for (int i = 0; i < k; i++) {
        int b, c;
        cin >> b >> c;
        brand_to_costs[b].push_back(c);
    }

    vector<int> top_costs;
    for (auto &entry : brand_to_costs) {
        vector<int> &costs = entry.second;
        sort(costs.rbegin(), costs.rend());
        for (int i = 0; i < min(n, (int)costs.size()); i++) {
            top_costs.push_back(costs[i]);
        }
    }

    sort(top_costs.rbegin(), top_costs.rend());
    int max = 0;
    for (int i = 0; i < min(n, (int)top_costs.size()); i++) {
        max_earnings += top_costs[i];
    }

    cout << max_earnings << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k][2];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i][0] >> a[i][1];
        }

        int ans = 0;
        if (n >= k)
        {
            for (int i = 0; i < k; i++)
            {
                ans += a[i][1];
            }
        }
        else
        {
            vector<int> costs;
            for (int i = 0; i < k; i++)
            {
                costs.push_back(a[i][1]);
            }
            sort(costs.rbegin(), costs.rend());
            for (int i = 0; i < n; i++)
            {
                ans += costs[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> brand_costs(k + 1);
        
        for (int i = 0; i < k; i++)
        {
            int b, c;
            cin >> b >> c;
            brand_costs[b].push_back(c);
        }

        vector<int> top_costs;
        for (int i = 1; i <= k; i++)
        {
            if (!brand_costs[i].empty())
            {
                sort(brand_costs[i].rbegin(), brand_costs[i].rend());
                for (int j = 0; j < min(n, (int)brand_costs[i].size()); j++)
                {
                    top_costs.push_back(brand_costs[i][j]);
                }
            }
        }

        sort(top_costs.rbegin(), top_costs.rend());
        int max_earnings = 0;
        for (int i = 0; i < min(n, (int)top_costs.size()); i++)
        {
            max_earnings += top_costs[i];
        }

        cout << max_earnings << endl;
    }
    return 0;
}
*/

