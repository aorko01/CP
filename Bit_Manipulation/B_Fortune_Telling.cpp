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
        ll n,x,y;
        cin>>n>>x>>y;
        ll m=0;
        REP(i,0,n)
        {
            ll a;
            cin>>a;
            m^=a;
        }
        ll u=(m&1);
        if(u)
        {
            if(y%2==0)
            {
                if(x%2==1)
                cout<<"Alice"<<endl;
                else
                cout<<"Bob"<<endl;
            }
            else
            {
                if(x%2==1)
                cout<<"Bob"<<endl;
                else
                cout<<"Alice"<<endl;
            }
        }
        else
        {
            if(y%2==0)
            {
                if(x%2==1)
                cout<<"Bob"<<endl;
                else
                cout<<"Alice"<<endl;
            }
            else
            {
                if(x%2==1)
                cout<<"Alice"<<endl;
                else
                cout<<"Bob"<<endl;
            }
           
        }
            
    }
}