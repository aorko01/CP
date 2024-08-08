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
        vl a(n,0);
        vl b(n,0);
        cin >> a[0];
        b[0] = a[0];
        REP(i,1,n)
        {
            cin >> a[i];
            b[i] = b[i-1] ^ a[i];
        }
        string s;
        cin >> s;
        ll zero = 0, one = 0;
        REP(i,0,s.size())
        {
            if(s[i] == '0')
                zero ^= a[i];
            else
                one ^= a[i];
        }
        ll q;
        cin >> q;
        while(q--)
        {
            ll z;
            cin >> z;
            if(z == 1)
            {
                ll m, n;
                cin >> m >> n;
                m--;
                n--;
                ll c;
                if (m == 0)
                    c = b[n];
                else
                    c = b[n] ^ b[m-1];
                zero ^= c;
                one ^= c;
            }
            else
            {
                ll x;
                cin >> x;
                if(x == 0)
                    cout << zero << " ";
                else
                    cout << one << " ";
            }
        }
        cout << endl;
    }
}
