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
        ll n, q;
        cin >> n >> q;
        vector<pair<ll, ll>> v;
        ll x;
        cin >> x;
        v.PB(MP(x, x));
        REP(i, 1, n)
        {
            cin >> x;
            ll curr_height = x + v[i - 1].S;
            if (x > v[i - 1].F)
            {
                v.PB(MP(x, curr_height));
            }
            else
            {
                v.PB(MP(v[i - 1].F, curr_height));
            }
        }
        sort(v.begin(), v.end());
        ll l;
        while (q--)
        {
            cin >> l;
            auto it = upper_bound(v.begin(), v.end(), MP(l, ll(LLONG_MAX)));
            if (it == v.begin())
            {
                cout << 0 << " ";
            }
            else
            {
                cout << (it-1)->S << " ";
            }
        }
        cout << endl;
    }
}