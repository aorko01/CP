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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maximum = INT_MIN;
        REP(i, 0, n)
        {
            cin >> arr[i];
            maximum = max(arr[i], maximum);
        }
        int i = n - 1;
        while(i>0 && arr[i-1]>=arr[i])
        {
            i--;
        }
        while(i>0 && arr[i-1]<=arr[i])
        {
            i--;
        }
        cout<<i<<endl;

    }
}