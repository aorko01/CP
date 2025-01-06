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
        ll n;
        cin >> n;
        ll x, y;
        multimap<ll, pair<ll, ll>> m; // Allows duplicate keys
        
        REP(i, 0, n)
        {
            cin >> x >> y;
            m.insert({x + y, MP(x, y)}); // Corrected insertion for multimap
        }
        
        for(auto i : m)
        {
            cout << i.S.F << " " << i.S.S << " ";
        }
        cout << endl;
    }
    
    return 0;
}
