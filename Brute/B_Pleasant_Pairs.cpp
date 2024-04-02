/*
    REFER TO THIS LINK FOR EXPLAINATION
        https://www.notion.so/e05f3660266343c4b140814d0467d36b?pvs=4
*/
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
        ll n;
        cin >> n;
        int arr[n + 1];
        map<int, int> m;
        REP(i, 1, n + 1)
        {
            cin >> arr[i];
            m[arr[i]] = i;
        }
        ll count = 0;
        REP(i, 2, n+1)
        {
            if (arr[i] > 2 * i - 1)
                continue;
            else
            {
                for (int x = arr[i]; x <= 2 * i - 1; x += arr[i])
                {
                    int j=x-i;
                    if(arr[j]*arr[i]==x && j>=1)
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}