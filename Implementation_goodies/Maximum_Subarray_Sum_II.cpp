#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define SQ(a) (a)*(a)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    ll a, b;
    cin >> a >> b;

    vl p(t + 1, 0);
    REP(i, 1, t + 1) {
        cin >> p[i];
        p[i] += p[i - 1]; 
    }

    ll ans = LLONG_MIN;
    multiset<ll> s;

    REP(i, a, t + 1) {
        if (i > b) {
            s.erase(s.find(p[i - b - 1]));
        }
        s.insert(p[i - a]);

        ans = max(ans, p[i] - *s.begin());
    }

    cout << ans << endl;

    return 0;
}
