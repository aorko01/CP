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
        ll n,k;
        cin>>n>>k;
        map<ll,pair<ll,ll>> mp;
        for(int i=1;i<=n;i++)
        {
            ll z;
            cin>>z;
            if(mp.find(z)==mp.end())
            {
                mp[z] = {i,i};
            }
            else
            {
                mp[z].S = i;
            }
        }
        vector<ll> ans(k+1,0);
        auto it=mp.end();
        it--;
        while(it!=mp.begin())
        {
            auto it1 = it;
            it1--;
            ll x = it->F;
            ll l = it->S.F;
            ll r = it->S.S;
            ans[x]=(r-l+1)*2;
            it1->S.F=min(it1->S.F,l);
            it1->S.S=max(it1->S.S,r);
            it=it1;
        }
        ll x = it->F;
        ll l = it->S.F;
        ll r = it->S.S;
        ans[x]=(r-l+1)*2;
        for(int i=1;i<=k;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
            
    }
}