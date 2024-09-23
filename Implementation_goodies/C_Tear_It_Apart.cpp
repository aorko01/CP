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
        string s;
        cin>>s;
        map<char,ll> m;
        map<char,ll> pos;
        REP(i,0,s.size())
        {
            if(m.find(s[i])==m.end())
            {
                m[s[i]]=i;
                pos[s[i]]=i;
            }
            else
            {
                m[s[i]]=max(m[s[i]],i-pos[s[i]]-1);
                pos[s[i]]=i;
            }
        }
        for(auto i:pos)
        {
            m[i.F]=max(m[i.F],(ll)s.size()-i.S-1);
        }
        ll ans=LLONG_MAX;
        for(auto i:m)
        {
            ans=min(ans,i.S);
        }
        if(ans==0)
        cout<<0<<endl;
        else
        cout<<floor(log2(ans))+1<<endl;
    }
}