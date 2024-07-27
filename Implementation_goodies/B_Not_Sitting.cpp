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
#define REP(i, a, b) for (ll i = a; i < b; i++)
#define SQ(a) (a) * (a)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vl a;
        REP(i, 1, n + 1) {
            REP(j, 1, m + 1) {
                a.PB(max(abs(1 - i), abs(n - i)) + max(abs(1 - j), abs(m - j)));
            }
        }
        sort(a.begin(), a.end());
        REP(i, 0, n * m) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
