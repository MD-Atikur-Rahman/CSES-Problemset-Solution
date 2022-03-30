#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define PB push_back
#define All(x) (x).begin(),(x).end()
#define MP make_pair
#define nl "\n"
typedef pair<int,int>PII;
typedef vector<int>VI;
typedef vector<PII>VPII;
typedef vector<VI>VVI;
typedef vector<long long>VL;
typedef vector <VL>VVl;
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}
const long double PI = 3.14159265358979;
const long double EPS=1e-9;

const int MOD=1e9+7;


void Engine(int tc)
{
    int n,x; cin>>n>>x;
    int coins[n]; for(int &x:coins)cin>>x;
    
    int dp[x+1];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    
    for(int i=0; i<n; i++)
    {
        for(int j=coins[i]; j<=x; j++)dp[j]=(dp[j]+dp[j-coins[i]])%MOD;
    }
    
    cout<<dp[x]<<nl;
}

int main()
{
    FastIO
    int tt=1;
    //cin>>tt;
    for(int tc=1; tc<=tt; tc++)
    {
        Engine(tc);
    }
    return 0;
}  