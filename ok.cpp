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
        ll n,k;
        cin>>n>>k;
        vector<vector<int>> vec(n, vector<int>(n, INT_MAX));
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            for(int j=0;j<n;j++)
            {
                vec[i][j] = min(vec[i][j], z);
            }
            for(int j=0;j<n;j++)
            {
                vec[j][i] = min(vec[j][i], z);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}