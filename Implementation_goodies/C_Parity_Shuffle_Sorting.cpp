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
        cin>>n;  // Read n before creating the vector
        vl a(n);  // Now correctly sized vector
        REP(i,0,n) cin>>a[i];
        cout<<n-1<<endl;
        if(n-1==0)
        continue;
        cout<<1<<" "<<n<<endl;
        ll check=a[0]+a[n-1];
        ll even=0;
        if(check%2==0)
        {
            if(a[n-1]%2==0) even++;
        }
        else
        {
            if(a[0]%2==0) even++;
        }
        REP(i,1,n-1)
        {
            if(even==1)
            {
                if(a[i]%2==0)
                cout<<i+1<<" "<<n<<endl;
                else
                cout<<1<<" "<<i+1<<endl;
            } 
            else
            {
                if(a[i]%2!=0)
                cout<<i+1<<" "<<n<<endl;
                else
                cout<<1<<" "<<i+1<<endl;
            }
        }
    }
    return 0;
}