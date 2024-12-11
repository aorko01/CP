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
        int n, a, b;
        cin >> n >> a >> b;

        set<int> st;

        ll sol = 0, ans = LLONG_MAX;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            if (st.find(x) == st.end())
                st.insert(x);
            else
                sol += a;
        }

        vector<int> p;
        for (auto x : st)
            p.push_back(x);

        int c = p.size();

        for (int i = 0; i < c; i++)
        {
            ans = min(ans, 1LL * abs(p[i] - (i + 1)) * b + 1LL * (c - i - 1) * a);
        }

        ans = min(ans, 1LL * c * a + b);


        cout << ans + sol << '\n';
    }
}