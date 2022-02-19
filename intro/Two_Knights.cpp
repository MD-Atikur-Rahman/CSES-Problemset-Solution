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

void Engine()
{
    int n; cin>>n;

    if(n>=1)cout<<0<<nl;
    if(n>=2)cout<<6<<nl;
    if(n>=3)cout<<28<<nl;

    ll ans;

    for(int i=4; i<=n; i++)
    {
        ans=4*(i*i-3);
        ans+=8*(i*i-4);
        ans+=1ll*(4*(i-4)+4)*(i*i-5);
        ans+=1ll*4*(i-4)*(i*i-7);
        ans+=1ll*(i-4)*(i-4)*(i*i-9);
        ans>>=1;
        cout<<ans<<nl;
    }
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