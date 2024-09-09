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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, t;
    cin >> n >> t;
    vl a(n), prefix(n + 1, 0);

    REP(i,0,n) {
        cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }

    ll maxsize = 0;

    REP(i,0,n+1) {
        auto it = upper_bound(prefix.begin(), prefix.end(), prefix[i] + t);
        if (it != prefix.begin()) {
            ll j = it - prefix.begin() - 1;
            maxsize = max(maxsize, j - i);
        }
    }

    cout << maxsize;
}
