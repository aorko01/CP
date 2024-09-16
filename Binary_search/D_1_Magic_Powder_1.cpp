#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    vl a(n), b(n);

    for (ll i = 0; i < n; ++i) {
        cin >> a[i]; 
    }
    for (ll i = 0; i < n; ++i) {
        cin >> b[i];  
    }


    ll low = 0, high = 1e10; 
    ll ans = 0;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll needed_powder = 0;
        bool possible = true;

        for (ll i = 0; i < n; ++i) {
            ll required = a[i] * mid;
            
            if (required > b[i]) {
                needed_powder += required - b[i];
            }

            if (needed_powder > k) {
                possible = false;
                break;
            }
        }

        if (possible) {
            ans = mid;  
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl; 
}