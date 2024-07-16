#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n;
    cin >> n;
    vl v(n);
    ll total = 0;
    REP(i, 0, n) {
        cin >> v[i];
        total += v[i];
    }

    sort(v.begin(), v.end());

    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll coins = LLONG_MAX;

        auto it = lower_bound(v.begin(), v.end(), x);

        if (it == v.end()) {
            it--;
            //this is a new way of taking only the numbers that results to positive after subtraction.
            coins = max(0LL, x - *it) + max(0LL, y - (total - *it));
        } else {
            coins = max(0LL, x - *it) + max(0LL, y - (total - *it));


            if (it != v.begin()) {
                it--;
                coins = min(coins, max(0LL, x - *it) + max(0LL, y - (total - *it)));
            }
        }

        cout << coins << endl;
    }

    return 0;
}
