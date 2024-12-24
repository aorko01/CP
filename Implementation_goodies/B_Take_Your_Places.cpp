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
        vl a(n);
        ll even = 0, odd = 0;
        REP(i, 0, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        ll d = 0, ans = 0;
        if (n % 2 == 0)
        {
            if (even != odd)
            {
                cout << -1 << endl;
            }
            else
            {
                REP(i, 0, n)
                {
                    if (i % 2 == 0 && a[i] % 2 != 0)
                    {
                        d++;
                    }
                    else if (i % 2 != 0 && a[i] % 2 == 0)
                    {
                        d--;
                    }
                    ans += abs(d);
                }
                ll check = ans;
                ans = 0;
                d = 0;
                REP(i, 0, n)
                {
                    if (i % 2 == 0 && a[i] % 2 == 0)
                    {
                        d++;
                    }
                    else if (i % 2 != 0 && a[i] % 2 != 0)
                    {
                        d--;
                    }
                    ans += abs(d);
                }
                cout << min(ans, check) << endl;
            }
        }
        else
        {
            if (abs(even - odd) > 1)
            {
                cout << -1 << endl;
            }
            else
            {
                if (even > odd)
                {
                    REP(i, 0, n)
                    {
                        if (i % 2 == 0 && a[i] % 2 != 0)
                        {
                            d++;
                        }
                        else if (i % 2 != 0 && a[i] % 2 == 0)
                        {
                            d--;
                        }
                        ans += abs(d);
                    }
                    cout << ans << endl;
                }
                else
                {
                    REP(i, 0, n)
                    {
                        if (i % 2 == 0 && a[i] % 2 == 0)
                        {
                            d++;
                        }
                        else if (i % 2 != 0 && a[i] % 2 != 0)
                        {
                            d--;
                        }
                        ans += abs(d);
                    }
                    cout << ans << endl;
                }
            }
        }
    }
}
