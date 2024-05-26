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
        ll n,k,m;
        cin>>n>>m>>k;
        if(k==1)
        {
            cout<<1<<endl;
        }
        else if(k==2)
        {
            if(m<=n)
            {
                cout<<m<<endl;
            }
            else
            {
                cout<<n+(m-n)/n<<endl;
            }
        }
        else if(k==3)
        {
            if(m<=n)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<m-n-(m-n)/n<<endl;
            }
        }
        else
        cout<<0<<endl;
    }
}