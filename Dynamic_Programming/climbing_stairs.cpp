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

ll dp(vector<long long> &v,int i)
{
    if(i<=1) return 1; 
    
    if(v[i]!=-1) return v[i];
    return v[i]=dp(v,i-1)+dp(v,i-2); 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    vl v(t+1, -1); // Initialized vector v with size t+1 and -1 as default value
    cout<<dp(v,t)<<endl;
}
