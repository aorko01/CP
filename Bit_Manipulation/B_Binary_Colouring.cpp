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
bool hasAdjacentOnes(int num) {
    return (num & (num >> 1)) != 0;
}
vector<int> toBinary(int num) {
    vector<int> binary;
    if (num == 0) {
        binary.push_back(0);
        return binary;
    }
    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }
    return binary;
}
int nextNumberWithoutAdjacentOnes(int num) {

    while (hasAdjacentOnes(++num));
    return num;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vi a=toBinary(n);
        ll lastone=-1;
        int size=a.size();
        REP(i,1,size)
        {
            if(a[i]==1 && a[i-1]!=1)
            {
                lastone=i;
            }
            else if(a[i]==1 && a[i-1]==1 && i-1==0)
            lastone=0;
            if(a[i]==a[i-1] && a[i]==1 && i!=size-1)
            {
                if(a[i+1]==0)
                {
                    a[i+1]=1;
                    REP(j,lastone+1,i+1)
                    {
                        a[j]=0;
                    }
                    a[lastone]=-1;
                }
            }
            else if(i==size-1 && a[i]==1 && a[i-1]==1)
            {
                a.PB(1);
                REP(j,lastone+1,i+1)
                    {
                        a[j]=0;
                    }
                a[lastone]=-1;
            }
        }
        cout<<a.size()<<endl;
        REP(i,0,a.size())
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
}