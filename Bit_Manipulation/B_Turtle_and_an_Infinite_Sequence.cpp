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
        ll n,m;
        cin >> n >> m;
        ll ans=0;
        REP(i,0,32)
        {
            ll l;
            if(n-m>=0)
                l=n-m;
            else
                l=0;
            ll r=n+m;
            ll range=r-l+1;
            if(range>(1LL<<i))
            {
                ans|=1LL<<i; 
            }
            else
            {
                if(l/(1LL<<i)!=r/(1LL<<i)) 
                    ans|=1LL<<i;
                else
                {
                    if(((l/(1LL<<i))%2)==1) 
                        ans|=1LL<<i;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
