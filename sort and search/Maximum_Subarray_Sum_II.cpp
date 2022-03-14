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

void Engine(int tc)
{
    int n,a,b; cin>>n>>a>>b;
    ll ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(i>0)ar[i]+=ar[i-1];
    }
    multiset<ll> ms;
    
    a--;
    for(int i=a; i<b; i++)ms.insert(ar[i]);

    int ind=0;
    ll ans=ar[a];
    multiset<ll>::iterator it;

    while(a<n)
    {
        it=ms.end();
        it--;

        ans=max(ans,*it-(ind>0? ar[ind-1]:0));
        ms.erase(ms.find(ar[a]));
        a++;
        if(b<n)
        {
            ms.insert(ar[b]);
            b++;
        }
        ind++;
    }
    cout<<ans<<nl;
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