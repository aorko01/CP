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

const int MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll ans1 = 0, ans2 = 1;
        ll n = s.length();
        for (ll i = 0; i < s.length() ; i++)
        {
            ll j = i+1;
            while (j < s.length() && s[j] == s[i])
            {
                j++;
            }
            ans1++;
            ans2 = (ans2 * (j - i)) % MOD;
            i = j - 1;
        }
        for (ll i = 1; i <= (n - ans1); i++)
        {
            ans2 = (ans2 * i) % MOD;
        }
        cout << n - ans1 << " " << ans2 << endl;
    }
}
