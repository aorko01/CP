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
        ll x;
        cin>>x;
        string s;
        cin>>s;
        map<ll,ll> m;
        if(s.size()%2)
        {
            cout<<-1<<endl;
            continue;
        }
        deque<ll> a;
        REP(i,0,s.size())
        {
            if(s[i]=='0')
            {
                m[0]++;
                a.PB(0);
            }
            else
            {
                m[1]++;
                a.PB(1);
            }
        }
        if(m[0]!=m[1])
        {
            cout<<-1<<endl;
            continue;
        }
        ll i=0;
        vl ans;
        while(a.size()!=0)
        {
            ll x=a.front();
            ll y=a.back();
            if(x!=y)
            {
                a.pop_front();
                a.pop_back();
            }
            else
            {
                if(x==0)
                {
                    ans.PB(i+a.size());
                    a.PB(0);
                    a.PB(1);
                }
                else
                {
                    ans.PB(i);
                    a.push_front(1);
                    a.push_front(0);
                }
                a.pop_front();
                a.pop_back();
            }
            i++;
        }
        cout<<ans.size()<<endl;
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}