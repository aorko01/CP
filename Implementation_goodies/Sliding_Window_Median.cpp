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
    int t,k;
    cin>>t>>k;
    vi a(t);
    REP(i,0,t) cin>>a[i];
    
    // Special case for k=1
    if(k == 1) {
        REP(i,0,t) {
            cout << a[i] << (i == t-1 ? '\n' : ' ');
        }
        return 0;
    }
    
    multiset<int> low,high;
    low.insert(a[0]);
    REP(i,1,t) {
        if(i>=k) {
            cout<<*low.rbegin()<<" ";
            if(a[i-k]>*low.rbegin() && high.size()>0) high.erase(high.find(a[i-k]));
            else if(low.size()>0) low.erase(low.find(a[i-k]));
            if(low.size()==0) {
                low.insert(*high.begin());
                high.erase(high.begin());
            }
        }
        if(a[i]>=*low.rbegin()) high.insert(a[i]);
        else low.insert(a[i]);
        if(high.size()>k/2) {
            low.insert(*high.begin());
            high.erase(high.begin());
        }
        else if(low.size()>(k+1)/2) {
            high.insert(*low.rbegin());
            low.erase(prev(low.end()));
        }
    }
    cout<<*low.rbegin()<<endl;
    return 0;
}