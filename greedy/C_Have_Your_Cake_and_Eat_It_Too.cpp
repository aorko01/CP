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
bool solve(vl a,vl b,vl c,ll& sta,ll& stb,ll& stc,ll& enda,ll& endb,ll& endc,ll sum)
{
    ll i=1;
    ll count=0;
    REP(j,i,a.size())
    {
        if(a[j]-a[i-1]>=ceil(1.0*sum/3))
        {
            sta=i;
            enda=j;
            i=j+1;
            count++;
            break;
        }
    }
    REP(j,i,b.size())
    {
        if(b[j]-b[i-1]>=ceil(1.0*sum/3))
        {
            stb=i;
            endb=j;
            i=j+1;
            count++;
            break;
        }
    }
    REP(j,i,c.size())
    {
        if(c[j]-c[i-1]>=ceil(1.0*sum/3))
        {
            stc=i;
            endc=j;
            count++;
            break;
        }
    }
    if(count!=3)
    {
        return false;
    }
    return true;
    


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
        vl a(n+1),b(n+1),c(n+1);
        REP(i,1,n+1)
        {
            ll x;
            cin>>x;
            a[i]=a[i-1]+x;
        }
        REP(i,1,n+1)
        {
            ll x;
            cin>>x;
            b[i]=b[i-1]+x;
        }
        REP(i,1,n+1)
        {
            ll x;
            cin>>x;
            c[i]=c[i-1]+x;
        }
        bool flag=false;
        ll sta=1,stb=1,stc=1;
        ll enda=n,endb=n,endc=n;
        if(solve(a,b,c,sta,stb,stc,enda,endb,endc,a[n]))
        {
            cout<<sta<<" "<<enda<<" "<<stb<<" "<<endb<<" "<<stc<<" "<<endc<<endl;
        }
        else if(solve(a,c,b,sta,stc,stb,enda,endc,endb,a[n]))
        {
            cout<<sta<<" "<<enda<<" "<<stb<<" "<<endb<<" "<<stc<<" "<<endc<<endl;
        }
        else if(solve(b,a,c,stb,sta,stc,endb,enda,endc,b[n]))
        {
            cout<<sta<<" "<<enda<<" "<<stb<<" "<<endb<<" "<<stc<<" "<<endc<<endl;
        }
        else if(solve(b,c,a,stb,stc,sta,endb,endc,enda,b[n]))
        {
            cout<<sta<<" "<<enda<<" "<<stb<<" "<<endb<<" "<<stc<<" "<<endc<<endl;
        }
        else if(solve(c,a,b,stc,sta,stb,endc,enda,endb,c[n]))
        {
            cout<<sta<<" "<<enda<<" "<<stb<<" "<<endb<<" "<<stc<<" "<<endc<<endl;
        }
        else if(solve(c,b,a,stc,stb,sta,endc,endb,enda,c[n]))
        {
            cout<<sta<<" "<<enda<<" "<<stb<<" "<<endb<<" "<<stc<<" "<<endc<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        

    }
}