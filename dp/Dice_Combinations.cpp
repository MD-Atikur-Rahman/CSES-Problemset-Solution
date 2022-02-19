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
template <typename T> vector<T> sort_unique(vector<T> vec) { sort(vec.begin(), vec.end()), vec.erase(unique(vec.begin(), vec.end()), vec.end()); return vec; }
const long double PI = 3.14159265358979;
const long double EPS=1e-9;

const ll MOD=1e9+7;
const ll MX=1e6+5;
ll cnt[MX];
ll bexp(ll n, ll p)
{
    ll res=1;
    while(p)
    {
        if(p&1)res=res*n%MOD;
        n=n*n%MOD;
        p>>=1;
    }
    return res;
}

void Engine()
{
    ll cnt1;
    memset(cnt,0,sizeof(cnt));

    for(int i=1; i<15; i++)
    {
        for(int j=i-1; j>0 && j>=i-6; j--)cnt[i]=(cnt[i]+cnt[j])%MOD;
        if(i<=6)cnt[i]+=1;

        cout<<cnt[i]<<nl;

        // cnt1=bexp(2,i-1);
        // if(i>6)cnt1-=bexp(2,i-6-1);
        // cnt1%=MOD;

        // if(cnt1!=cnt[i])
        // {
        //     cout<<i<<" "<<cnt[i]<<" "<<cnt1<<nl;
        //     break;
        // }
    }
    // cout<<cnt[7]<<nl;
    // int n; cin>>n;
    // cout<<cnt[n]<<nl;
}

int main()
{
    FastIO
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        Engine();
    }
    return 0;
}  