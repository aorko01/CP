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
        ll pos = 0, neg = 0, zero = 0;
        vector<ll> a;
        map<ll, ll> mp;
        ll x;

        REP(i, 0, n)
        {
            cin >> x;
            if (x == 0)
            {
                if (zero == 2)
                {
                    continue;
                }
                else
                {
                    zero++;
                    a.PB(x);
                    mp[0]++;
                }

            }
            else if (x > 0)
            {
                pos++;
                mp[x]++;
                a.PB(x);
            }
            else
            {
                neg++;
                mp[x]++;
                a.PB(x);
            }
        }
        if (pos > 2 || neg > 2)
            cout << "NO" << endl;
        else
        {
            bool flag = true;
            REP(i, 0, a.size())
            {
                REP(j, 0, a.size())
                {
                    REP(k, 0, a.size())
                    {
                        if (i != j && j != k && i != k)
                        {
                            if (mp.find(a[i] + a[j] + a[k]) == mp.end())
                            {
                                flag = false;
                                break;
                            }
                        }
                    }
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}