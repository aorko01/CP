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
        ll n, m;
        cin >> n >> m;
        map<ll, ll> freq;
        REP(i, 0, m)
        {
            ll x, y;
            cin >> x >> y;
            freq[x]++;
            freq[y]++;
        }
        vl counts;
        for (auto &entry : freq)
        {
            counts.PB(entry.S);
        }
        map<ll, ll> freq2;
        for (auto &entry : counts)
        {
            freq2[entry]++;
        }
        vl v;
        for (auto &entry : freq2)
        {
            v.PB(entry.S);
        }
        sort(v.begin(), v.end());
        if (v.size() == 3)
        {
            cout << v[1] << ' ' << v[2] / v[1] << '\n';
        }
        else
        {
            cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
        }
    }
    return 0;
}
