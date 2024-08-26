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

    ll t, x, y;
    cin >> t >> x >> y;

    set<pi> s;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll dx = a - x;
        ll dy = b - y;

        if (dx == 0)
        {
            dy = 1;
        }
        else if (dy == 0)
        {
            dx = 1;
        }
        else
        {
            if (dx < 0)
            {
                dx = -dx;
                dy = -dy;
            }
            ll g = __gcd(abs(dx), abs(dy));
            dx /= g;
            dy /= g;
        }

        s.insert(make_pair(dy, dx));
    }

    cout << s.size() << endl;
    return 0;
}