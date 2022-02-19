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

void Engine()
{
    ll n,t; cin>>n>>t;
    ll k[n]; for(ll &x:k)cin>>x;

    ll sum,mdl,l=0,r=1e18;

    while(l<r)
    {
        mdl=l+r+1>>1;
        if(mdl==r)break;

        sum=0;

        for(int i=0; i<n; i++)
        {
            sum+=mdl/k[i];
            if(sum>=t)break;
        }
        if(sum>=t)r=mdl;
        else l=mdl;
    }
    cout<<r<<nl;
}

int main()
{
    FastIO
    int tt=1;
    //cin>>tt;
    for(int tc=1; tc<=tt; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        Engine();
    }
    return 0;
}  