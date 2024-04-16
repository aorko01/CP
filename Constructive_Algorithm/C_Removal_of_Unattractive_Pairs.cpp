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
        string s;
        cin >> s;
        map<char, int> m;
        REP(i, 0, n)
        {
            m[s[i]]++;
        }
        vl v;
        for (auto i : m)
        {
            v.PB(i.S);
        }
        ll maxi=INT_MIN;
        REP(i,0,v.size())
        {
            maxi=max(maxi,v[i]);
        }
        if(maxi<=n/2)
        {
            cout<<n%2<<endl;
        }
        else
        cout<<2*maxi-n<<endl;
    }
}