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
        ll n, a, b;
        cin >> n >> a >> b;
        ll c=__gcd(a,b);
        set<ll> s;
        REP(i, 0, n)
        {
            ll x;
            cin >> x;
            s.insert(x%c);
        }
        vl v(s.begin(),s.end());
        ll mini=v[v.size()-1]-v[0];
        REP(i,1,v.size())
        {
            mini=min(mini,v[i-1]+c-v[i]);
        }
        cout<<mini<<endl;
        
    }
}