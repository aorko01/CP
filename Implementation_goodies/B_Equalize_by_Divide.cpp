#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, set<ll>> mp;
        REP(i, 1, n + 1)
        {
            ll x;
            cin >> x;
            mp[x].insert(i);
        }
        if (mp.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else if (mp.begin()->first == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            vector<pair<int, int>> ans;
            while (mp.size() != 1)
            {
                auto big = prev(mp.end());
                auto small=mp.begin();
                ans.push_back({*big->second.begin(), *small->second.begin()});
                double biggy=big->first;
                double smally=small->first;
                if(biggy/smally==ll(biggy/smally))
                mp[big->first/small->first].insert(*big->second.begin());
                else
                mp[ceil(big->first/smally)].insert(*big->second.begin());
                big->second.erase(big->second.begin());
                if (big->second.size() == 0)
                {
                    mp.erase(prev(mp.end()));
                }
                
            }
            cout << ans.size() << endl;
            for (auto x : ans)
            {
                cout << x.first << " " << x.second << endl;
            }
        }
    }
}