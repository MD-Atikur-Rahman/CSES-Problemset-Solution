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
VVI g;
VI ans;
bool vis[100005];
bool flag=false;

void dfs(int v, int p)
{
    for(int x:g[v])
    {
        if(x==p)continue;
        if(vis[x])
        {
            flag=true;
            ans.push_back(x);
            ans.push_back(v);
            return;
        }
        vis[x]=true;
        dfs(x,v);
        if(flag==true)
        {
            if(ans.front()!=ans.back())ans.push_back(v);
            return;
        }
    }
}

void Engine(int tc)
{
    int u,v,n,m; cin>>n>>m;
    g.resize(n+1);

    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        g[u].PB(v);
        g[v].PB(u);
    }

    for(int i=1; i<=n; i++)
    {
        if(vis[i])continue;
        if(flag)break;
        vis[i]=true;
        dfs(i,0);
    }
    if(flag)
    {
        cout<<ans.size()<<nl;
        print(ans);
    }
    else cout<<"IMPOSSIBLE\n";
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