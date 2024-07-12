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
        vl a(n+1);
        REP(i,1,n+1)
        {
            cin>>a[i];
        }
        bool flag=true;
        REP(i,1,n+1)
        {
            bool all_divisible=true;
            for(int j=i+1;j>=2;j--)
            {
                if(a[i]%j!=0)
                {
                    all_divisible=false;
                    break;
                }
            }
            if(all_divisible)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
            
    }
}