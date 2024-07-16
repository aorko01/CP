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
        // this loop would run for at most 10^4 times (not exactly)
        // because we would find a good number much before that so the loop would break
        //even if this ran for 10^4 times we are still good.
        while(true)
        {
            ll temp=n;
            bool flag=true;
            //this loop would run for at most 10 times regarding the constraints
            while(temp>0)
            {
                if(temp%3==2)
                {
                    flag=false;
                    break;
                }
                temp/=3;
            }
            if(flag)
            {
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }
}