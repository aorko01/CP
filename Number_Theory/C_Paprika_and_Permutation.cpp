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
        set<ll> s;
        vl a;
        REP(i,0,n)
        {
            ll x;
            cin>>x;
            if((s.find(x)!=s.end() && x<=n)|| x>n)
            {
                a.PB(x);
            }
            if(x<=n)
            s.insert(x);
        }
        sort(a.begin(),a.end(),greater<ll>());
        bool flag=true;
        ll m=a.size();
        REP(i,1,n+1)
        {
            if(s.find(i)==s.end())
            {
                ll x=a.back();
                a.pop_back();
                ll y=i;
                if(x%(x-y)==y)
                {
                    continue;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<m<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
}