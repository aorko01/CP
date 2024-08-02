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
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vl a(s.size(), 0);
        set<ll> zero;
        set<ll> one;

        REP(i, 0, s.size()) {
            if (s[i] == '0') {
                zero.insert(i);
            } else {
                one.insert(i);
            }
        }

        if (k % 2 == 0) {
            ll times = k;
            for (auto i : zero) {
                if (times > 0) {
                    a[i] = 1;
                    times--;
                } else {
                    break;
                }
            }
            a[s.size() - 1] += times;
            times = k;
            REP(i, 0, s.size()-1) {
                if (s[i] == '0') {
                    if (times > 0) {
                        s[i] = '1';
                        times--;
                    }
                }
            }
            if(a[s.size()-1]%2!=0)
            {
                if(s[s.size()-1]=='0')
                s[s.size()-1]='1';
                else
                s[s.size()-1]='0';
            }
            
        } else {
            ll times = k;
            for (auto i : one) {
                if (times > 0) {
                    a[i] = 1;
                    times--;
                } else {
                    break;
                }
            }
            a[s.size() - 1] += times;
            times = k;
            REP(i, 0, s.size()-1) {
                if (s[i] == '0') {
                    s[i] = '1';
                } else {
                    if (times == 0) {
                        s[i] = '0';
                    } else {
                        times--;
                    }
                }
            }
            if(a[s.size()-1]%2==0)
            {
                if(s[s.size()-1]=='0')
                s[s.size()-1]='1';
                else
                s[s.size()-1]='0';
            }
        }
        cout << s << endl;
        REP(i, 0, a.size()) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
