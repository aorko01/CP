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
#define SQ(a) ((a) * (a))

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        set<ll> s;
        s.insert(1);
        if(n>=3)
        {
            s.insert(3);
            s.insert(7);
            if(k%3==0)
            s.insert(9);
        }
        if(n>=6)
        s.insert(9);
        for(ll i=1;i<=k;i+=2)
        {
            if(k%i==0)
            {
                s.insert(i);
            }
        }
        for(auto i:s)
        cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}