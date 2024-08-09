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

vector<ll> unsetBits(ll n)
{
    vector<ll> v;
    for(ll i=0;i<30;i++)
    {
        if((n&(1<<i))==0)
        {
            v.PB(i);
        }
    }
    return v;
}
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
        ll need=n;
        vector<ll> s=unsetBits(need);
        ll  a=n,b=0;
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(need>=(2*(1<<s[i])))
            {
                need-=(2*(1<<s[i]));
                a+=(1<<s[i]);
                b+=(1<<s[i]);
            }
        }
        if(need==0)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        cout<<-1<<endl;
    }
}