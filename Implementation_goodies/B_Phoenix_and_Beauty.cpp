#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i = a; i < b; i++)
#define SQ(a) (a)*(a)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x;  // Corrected: `n` and `x` should be declared separately
        cin >> n >> x;
        
        set<ll> s;
        REP(i, 0, n)
        {
            ll y;
            cin >> y;
            s.insert(y);  // Insert unique elements into set
        }
        
        vl v;
        
        if(s.size() > x)
        {
            cout << -1 << endl;  // If there are more unique elements than x, it's impossible
        }
        else 
        {
            // Add all unique elements from the set to vector `v`
            for(auto i: s) 
                v.PB(i);
            
            // If there are fewer unique elements than x, pad with any extra values
            while(v.size() < x)
                v.PB(1);  // Pad the vector with any value (1 in this case)
            
            // Output the total length (v.size() * n)
            cout << v.size() * n << endl;
            
            // Repeat the sequence `n` times
            REP(i, 0, n)
            {
                for(auto j: v)
                    cout << j << " ";
            }
            cout << endl;  // Add a newline after output
        }
    }
    
    return 0;
}
