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
#define REP(i, a, b) for (ll i = a; i < b; i++)
#define SQ(a) (a) * (a)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        for(ll i=1;i<=n;i*=2)
        {
            if((n+i)/(i*2)<k)
            {
                k-=(n+i)/(i*2);
            }
            else
            {
                cout<<i+(i*2)*(k-1)<<endl;
                break;
            }
        }
    }
}