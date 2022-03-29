#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define PB push_back
#define All(x) (x).begin(),(x).end()
#define MP make_pair
#define nl "\n"
typedef pair<ll,ll>PII;
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
    ll u,v,w,n,m; cin>>n>>m;
    ll plen[n+1];
    memset(plen,-1,sizeof plen);

    vector<VPII> g(n+1);

    for(int i=0; i<m; i++)
    {
        cin>>u>>v>>w;
        g[u].PB({v,w});
    }

    priority_queue<PII,VPII,greater<PII>> pq;
    pq.push({0,1});
    plen[1]=0;

    while(!pq.empty())
    {
        v=pq.top().second;
        w=pq.top().first;

        pq.pop();

        if(plen[v]!=w)continue;

        for(PII x:g[v])
        {
            if(plen[x.first]==-1 || plen[x.first]>plen[v]+x.second)
            {
                plen[x.first]=x.second+plen[v];
                pq.push({plen[x.first],x.first});
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout<<plen[i]<<" ";
    }
    cout<<nl;
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