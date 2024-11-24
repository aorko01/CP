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
        vl a(n);
        REP(i,0,n)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        vl red,blue;
        REP(i,0,n)
        {
            if(s[i]=='B')
            {
                blue.PB(a[i]);
            }
            else
            {
                red.PB(a[i]);
            }
        }        
        sort(red.begin(),red.end(),greater<ll>());
        sort(blue.begin(),blue.end());
        bool flag=true;
        REP(i,0,blue.size())
        {
            if(blue[i]<i+1)
            {
                flag=false;
                break;
            }
        }
        REP(i,0,red.size())
        {
            if(red[i]>n-i)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}