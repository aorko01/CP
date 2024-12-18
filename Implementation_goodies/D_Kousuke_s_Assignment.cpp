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
        ll count=0;
        ll sum=0;
        REP(i,0,n)
        {
            ll x;
            cin>>x;
            sum+=x;
            if(s.find(sum)!=s.end()||sum==0)
            {
                count++;
                s.clear();
                // s.insert(x);
                sum=0;
            }
            else
            {
                s.insert(sum);
            }
        }
        cout<<count<<endl;
    }
}