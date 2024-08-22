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
        ll totalXor = 0;

        REP(i, 0, n)
        {
            cin >> a[i];
            totalXor ^= a[i];
        }

        if (totalXor == 0) 
        {
            cout << "YES\n";
            continue;
        }

        ll currentXor = 0;
        int count = 0;
        REP(i, 0, n)
        {
            currentXor ^= a[i];
            if (currentXor == totalXor)
            {
                count++;
                currentXor = 0; 
            }
        }
        if (count >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
