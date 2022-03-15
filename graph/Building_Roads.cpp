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
    int n,m,u,v; cin>>n>>m;
    
    VVI g(n+1);
    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].PB(u);
    }

    VPII ans;
    bool vis[n+1];
    memset(vis,0,sizeof vis);
    queue<int> q;
    for(int i=1; i<=n; i++)
    {
        if(vis[i])continue;
        
        if(i>1)
        {
            ans.PB({i-1,i});
        }

        q.push(i);
        vis[i]=true;

        while(!q.empty())
        {
            v=q.front();
            q.pop();

            for(int x:g[v])
            {
                if(!vis[x])
                {
                    vis[x]=true;
                    q.push(x);
                }
            }
        }
    }
    cout<<ans.size()<<nl;
    for(PII x:ans)cout<<x.first<<" "<<x.second<<nl;
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