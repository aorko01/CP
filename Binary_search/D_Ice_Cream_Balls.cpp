#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solveQuadratic(ll c)
{
    ll a = 1;
    ll b = -1;
    ll d = -2 * c;

    ll discriminant = b * b - 4 * a * d;

    if (discriminant < 0)
    {
        return -1;
    }
    else
    {
        ll sqrtD = sqrt(discriminant);
        if (sqrtD * sqrtD != discriminant)
            return -1;
        ll n1 = (-b + sqrtD) / (2 * a);
        ll n2 = (-b - sqrtD) / (2 * a);
        return (n1 > 0) ? n1 : n2;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll solve = solveQuadratic(x);
        if (solve != -1)
        {
            cout << solve << endl;
        }
        else
        {
            ll lo = 1, hi = 2e9, res = -1;
            while (lo <= hi)
            {
                ll mid = lo + (hi - lo) / 2;
                if (mid * (mid - 1) / 2 < x)
                {
                    res = mid;
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
            }
            ll z = res * (res - 1) / 2;
            ll y = res + (x - z);
            cout << y << endl;
        }
    }
    return 0;
}
