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
        string s=".";
        string s1;
        cin>>s1;
        s+=s1;
        ll count=0;
        ll x=0;
        REP(i,2,s.size())
        {
            if(((s[i]==s[i-1]  && s[i-1]!='_') || ((s[i]==s[i-2])&& i>2)&& s[i-2]!='_'))
            {
                count++;
                s[i]='_';
            }
        }
        cout<<count<<endl;
    }
}