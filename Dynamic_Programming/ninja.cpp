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

int solve(int n,int last, vector<vector<int>> &points, vector<int> &dp)
{
    if(n==0)
    {
        if(last==0)
        return max(points[0][1],points[0][2]);
        else if(last==1)
        return max(points[0][0],points[0][2]);
        else
        return max(points[0][1],points[0][0]);
    }
    if(dp[n]!=-1) return dp[n];
    int l=INT_MIN;
    int r=INT_MIN;
    int z=INT_MIN;
    if(last!=0)
    {
        l=points[n][0]+solve(n-1,0,points,dp);
    }
    if(last!=1)
    r=points[n][1]+solve(n-1,1,points,dp);
    if(last!=2)
    z=points[n][2]+solve(n-1,2,points,dp);
    return dp[n]=max(l,max(r,z));

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<vector<int>> points(t, vector<int>(3)); 
    REP(i,0,t)
   

    REP(i, 0, t) {
        REP(j, 0, 3) {
            cin >> points[i][j]; 
        }
    }
    vector<int> dp(t,-1);
    cout<<solve(t-1,-1,points,dp);

    return 0;
}