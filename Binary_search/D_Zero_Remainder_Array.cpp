#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a;i<b;i++)
#define SQ(a) (a)*(a)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        map<ll, ll> remainder_count;
        ll max_moves = 0;

        for(int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ll remainder = x % k;
            if(remainder != 0)
            {
                remainder = k - remainder;
                remainder_count[remainder]++;
                ll moves_needed = remainder + (remainder_count[remainder] - 1) * k;
                max_moves = max(max_moves, moves_needed);
            }
        }
        
        if(max_moves == 0)
            cout << 0 << endl;
        else
            cout << max_moves + 1 << endl;
    }
    return 0;
}
