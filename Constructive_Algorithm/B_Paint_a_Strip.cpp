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
    map<ll,ll> m;
    m[1]=1;
    m[4]=2;
    while(true)
    {
        auto it=m.end();
        it--;
        ll num=it->F;
        if(((num)+1)*2>1e6)
        break;
        m[(num+1)*2]=it->S+1;
    }
    // for(auto i:m)
    // {
    //     cout<<i.F<<" "<<i.S<<endl;
    // }
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        auto it=m.lower_bound(n);
        cout<<it->S<<endl;
    }
}