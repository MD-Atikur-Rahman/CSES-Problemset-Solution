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

ll inf=1e18;

void Engine(int tc)
{
    ll u,v,w,n,m,q; cin>>n>>m>>q;
    ll plen[n+1][n+1];
    
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==j)plen[i][j]=0;
            else plen[i][j]=inf;
        }
    }

    for(int i=0; i<m; i++)
    {
        cin>>u>>v>>w;
        plen[u][v]=min(plen[u][v],w);
        plen[v][u]=min(plen[v][u],w);
    }


    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                plen[i][j]=min(plen[i][j],plen[i][k]+plen[k][j]);
            }
        }
    }
    
    while(q--)
    {
        cin>>u>>v;
        if(plen[u][v]==inf)plen[u][v]=-1;
        cout<<plen[u][v]<<nl;
    }

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