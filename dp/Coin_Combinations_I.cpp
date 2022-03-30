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

const ll MOD=1e9+7;

void Engine(int tc)
{
    int n,sum; cin>>n>>sum;
    int coin[n]; for(int &x:coin)cin>>x;

    int dp[sum+1];

    dp[0]=1;

    for(int i=1; i<=sum; i++)
    {
        dp[i]=0;
        for(int j=0; j<n; j++)
        {
            if(i-coin[j]>=0)dp[i]=(dp[i]+dp[i-coin[j]])%MOD;
        }
    }

    cout<<dp[sum];
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