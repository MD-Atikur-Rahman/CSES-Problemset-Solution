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
    int u,v,n,m; cin>>n>>m;
    VVI g(n+1);
    
    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        g[u].PB(v);
        g[v].PB(u);
    }

    int team[n+1];
    memset(team,0,sizeof team);

    queue<int>q;
    bool flag=true;
    
    for(int i=1; i<=n; i++)
    {
        if(team[i]!=0)continue;

        q.push(i);
        team[i]=1;

        while(!q.empty())
        {
            v=q.front();
            q.pop();

            for(int x:g[v])
            {
                if(team[x]==team[v])flag=false;
                if(team[x]==0)
                {
                    team[x]=3-team[v];
                    q.push(x);
                }
            }
        }
    }

    if(flag==false)
    {
        cout<<"IMPOSSIBLE\n";
    }
    else
    {
        for(int i=1; i<=n; i++)cout<<team[i]<<" ";
        cout<<nl;
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