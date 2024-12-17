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
        set<pair<ll, ll>> s;
        vl a(n + 1);
        REP(i, 1, n + 1)
        {
            cin >> a[i];
        }
        REP(i, 1, n)
        {
            if (a[i] > a[i + 1])
            {
                s.insert(MP(a[i] - a[i + 1], i + 1));
            }
        }
        vl ans(n + 1, 1);
        set<ll> notused_indices;
        REP(i, 1, n + 1)
        {
            notused_indices.insert(i);
        }
        queue<pair<ll, ll>> unused;
        for (auto i : s)
        {
            if (ans[i.F] == 1)
            {
                ans[i.F] = i.S;
                notused_indices.erase(i.F);
            }
            else
            {
                unused.push(i);
            }
        }
        while (!unused.empty())
        {
            auto i = unused.front();
            unused.pop();

            auto next_index = notused_indices.lower_bound(i.F);

            if (next_index != notused_indices.end())
            {

                ans[*next_index] = i.S;
                notused_indices.erase(*next_index);
            }
        }
        REP(i, 1, n + 1)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}