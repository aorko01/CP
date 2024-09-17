#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        
        vector<ll> arr(n);
        map<ll, map<ll, ll>> freq; // Map (mod m, mod k) -> frequency
        
        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            ll mod_m = x % m;
            ll mod_k = x % k;
            arr[i] = x;
            freq[mod_m][mod_k]++;
        }
        
        ll count = 0;
        
        for (ll i = 0; i < n; ++i)
        {
            ll x = arr[i];
            ll mod_m = x % m;
            ll mod_k = x % k;
            
            // Looking for pairs where (mod_m + other_mod_m == m)
            ll target_mod_m = (m - mod_m) % m;
            
            // If such pairs exist with the same mod_k
            if (freq[target_mod_m].count(mod_k))
            {
                count += freq[target_mod_m][mod_k];
            }
            
            // Avoid counting the same element with itself
            if (mod_m == target_mod_m && mod_k == mod_k)
            {
                count--; // If we counted the same element with itself, decrement once.
            }
        }
        
        // Since each pair is counted twice, divide by 2
        cout << count / 2 << "\n";
    }
}
