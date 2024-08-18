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
vl setBits(ll n)
{
    vl a;
    for(int i=0;i<60;i++)
    {
        if(n&(1LL<<i))
        {
            a.PB(i);
        }
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vl a(60);
    a[0]=1;
    REP(i,1,60)
    {
        a[i]=2*a[i-1]+1;
    }
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vl b=setBits(n);
        ll ans=0;
        for(int i=0;i<b.size();i++)
        {
            ans+=a[b[i]];
        }
        cout<<ans<<"\n";
    }
}