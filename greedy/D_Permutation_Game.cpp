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
ll findMax(ll n,ll k , vl a, vl b,ll curr)
{
    ll sum=0,ans=0;
    vector<bool> visited(n,false);
    while(visited[curr]==false && k>0)
    {
        visited[curr]=true;
        ans=max(ans,sum+(k*a[curr]));
        sum+=a[curr];
        k--;
        curr=b[curr]-1;
    }
    return ans;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,p1,p2;
        cin>>n>>k>>p1>>p2;
        p1--;
        p2--;
        vl a(n),b(n);
        REP(i,0,n)
        cin>>a[i];
        REP(i,0,n)
        cin>>b[i];
        ll sum1=findMax(n,k,b,a,p1);
        ll sum2=findMax(n,k,b,a,p2);
        if(sum1>sum2)
        cout<<"Bodya"<<endl;
        else if(sum1<sum2)
        cout<<"Sasha"<<endl;
        else
        cout<<"Draw"<<endl;
    }
}