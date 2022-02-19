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
    ll n; cin>>n;

    while(n>1)
    {
        cout<<n<<" ";
        if(n&1)n=1ll*n*3+1;
        else n>>=1;
    }
    cout<<n<<nl;
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