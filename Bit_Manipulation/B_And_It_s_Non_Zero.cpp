#include <bits/stdc++.h>
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
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    const int MAXN = 200001;
    const int MAXBITS = 20;
    vector<vl> bitCount(MAXBITS, vl(MAXN, 0));
    
    REP(i, 1, MAXN) {
        REP(j, 0, MAXBITS) {
            bitCount[j][i] = bitCount[j][i-1];
            if (i & (1 << j)) {
                bitCount[j][i]++;
            }
        }
    }
    
    while (t--) {
        ll a, b;
        cin >> a >> b;
        
        ll maxSetBits = 0;
        REP(j, 0, MAXBITS) {
            ll count = bitCount[j][b] - bitCount[j][a-1];
            maxSetBits = max(maxSetBits, count);
        }
        
        cout << (b - a + 1) - maxSetBits << endl;
    }
    
    return 0;
}
