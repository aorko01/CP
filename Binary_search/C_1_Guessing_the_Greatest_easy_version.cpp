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

ll ask(ll l, ll r)
{
	if (l == r)
		return -1;
	cout << "? " << l << " " << r << endl;
	ll x;
	cin >> x;
	return x;
}
 
int main()
{
	ll n;
	cin >> n;
	ll pos = ask(1, n);
	if (ask(1, pos) == pos)
	{
		ll ini = 1, fin = pos;
		while (ini < fin)
		{
			ll mid = (ini + fin + 1) / 2;
			if (ask(mid, n) == pos)
				ini = mid;
			else
				fin = mid - 1;
		}
		cout << "! " << ini << endl;
	}
	else
	{
		ll ini = pos, fin = n;
		while (ini < fin)
		{
			ll mid = (ini + fin) / 2;
			if (ask(1, mid) == pos)
				fin = mid;
			else
				ini = mid + 1;
		}
		cout << "! " << ini << endl;
	}
}