#include <bits/stdc++.h>
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
        ll mini=LLONG_MAX;
        ll minindex=-1;

        REP(i, 0, n)
        {
            cin>>a[i];
            if(mini > a[i])
            {
                mini = a[i];
                minindex = i;
            }
        }

        vector<vector<ll>> ans;

        REP(i, 0, n)
        {
            if(i == minindex)
                continue;
            ans.PB({minindex+1, i+1, mini, mini + abs(i - minindex)});
        }


        cout<<ans.size()<<endl;

        for(auto &v : ans)
        {
            for(auto &x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
