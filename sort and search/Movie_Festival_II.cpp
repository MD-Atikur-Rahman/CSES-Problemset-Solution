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
    int n,k; cin>>n>>k;
    PII tm[n];
    for(int i=0; i<n; i++)
    {
        cin>>tm[i].second>>tm[i].first;
    }
    
    sort(tm,tm+n);

    int ans=0;
    multiset<int> ms;

    for(int i=0; i<k; i++)ms.insert(0);

    for(int i=0; i<n; i++)
    {
        auto it=ms.upper_bound(tm[i].second);
        if(it!=ms.begin())
        {
            it--;
            ms.erase(it);
            ms.insert(tm[i].first);
            ans++;
        }
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