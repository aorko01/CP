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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vl a(n);
        REP(i,0,n)
        {
            cin>>a[i];
        }
        map<ll,ll> m;
        ll ans=0;
        REP(i,0,n)
        {
            ans+=m[a[i]];
            if(a[i]==1)
            {
                ans+=m[2];
            }
            if(a[i]==2)
            {
                ans+=m[1];
            }
            m[a[i]]++;
        }
        cout<<ans<<"\n";
    }
}