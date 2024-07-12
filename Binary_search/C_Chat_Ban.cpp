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
        ll k, x;
        ;
        cin >> k >> x;
        ll l = 1, r = 2 * k - 1, ans = 2 * k - 1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll total = 0;
            if (mid <= k)
            {
                total = (mid * (mid + 1)) / 2;
            }
            else
            {
                ll u = (k * (k + 1)) / 2;
                ll b = (mid - k);
                ll decreasing_sum = (k * (k - 1)) / 2 - ((k - b) * (k - b - 1)) / 2;
                total = u + decreasing_sum;
            }
            if (total >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
}